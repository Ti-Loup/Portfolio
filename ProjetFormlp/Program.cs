using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProjetLP
{
    internal class Program
    {
        public static void Main()
        {
            // List of available maps
            Dictionary<int, string> maps = new Dictionary<int, string>
        {
            { 1, "Chateau.map" },
            { 2, "Marais.map" },
            { 3, "Enfer.map" }
            // Add more maps as needed
        };

            // Display available maps to the user
            Console.WriteLine("Choisissez une carte :");
            foreach (var kvp in maps)
            {
                Console.WriteLine($"{kvp.Key} : {kvp.Value}");
            }

            int choixCarte;
            bool choixValide = false;

            // Loop until a valid choice is made
            do
            {
                Console.Write("Entrez le nombre correspondant à la carte choisie : ");
                if (int.TryParse(Console.ReadLine(), out choixCarte))
                {
                    if (maps.ContainsKey(choixCarte))
                    {
                        choixValide = true;
                    }
                    else
                    {
                        Console.WriteLine("Choix invalide. Veuillez choisir un nombre valide.");
                    }
                }
                else
                {
                    Console.WriteLine("Entrée invalide. Veuillez entrer un nombre.");
                }
            } while (!choixValide);

            // Load and display the selected map
            string nomCarteChoisie = maps[choixCarte];
            string cheminCarte = Path.Combine("chemin_vers_vos_fichiers_de_carte", nomCarteChoisie); // Mettez le chemin approprié ici

            string[] lignesCarte = File.ReadAllLines(cheminCarte);
            foreach (string ligne in lignesCarte)
            {
                Console.WriteLine(ligne);
            }

            // Commencez le jeu en utilisant la carte choisie
            CommencerPartie(nomCarteChoisie);
        }

        public static void CommencerPartie(string carteChoisie)
        {
            // Code pour démarrer le jeu avec la carte sélectionnée
            // Placez ici la logique pour commencer le jeu avec la carte choisie
        }
        public void gererErreurConsole(Exception erreur)
        {
            Console.WriteLine(erreur.Message);

           
        }

        static void dessinerCarte(char[,] carte)
        {
            Console.BackgroundColor = ConsoleColor.Cyan;

            //boucler 1ere dimension du tableau
            for (int Y = 0; Y < carte.GetLength(0); Y++)
            {
                //boucler 2ere dimension du tableau
                for (int X = 0; X < carte.GetLength(1); X++)
                {
                    Console.SetCursorPosition(X, Y);
                    //si on affiche le Chasseur
                    if (carte[Y, X] == 'C')
                    {
                        Console.ForegroundColor = ConsoleColor.Blue;
                    }
                    else
                    {       //texte en vert
                        Console.ForegroundColor = ConsoleColor.Green;
                    }
                    //dessiner contenu
                    Console.Write(carte[Y, X]);
                }
            }
        }
        //Variables globales
        
        static void Main(string[] args)
        {
            

            try
            {   //Variables
                int playerX = 5;
                int playerY = 7;
                char[,] carte = new char[20, 30]; //jagged array

                carte[19, 0] = '#';
                carte[19,10] = 'C';

                dessinerCarte(carte);
                //touche appuye par l'utilisateur
                ConsoleKeyInfo toucheAppuyee = Console.ReadKey();

                while (true)
                {
                    switch (toucheAppuyee.Key)
                    {
                        //gerer 4 directions
                        case ConsoleKey.UpArrow:
                            if(ChasseurY > 0 )
                            {   //effacer le joueur
                                Console.SetCursorPosition(playerX, playerY);
                                Console.Write(' ');
                                //deplacer le joueur
                                ChasseurY--;
                                //dessine le joueur
                                Console.SetCursorPosition(playerX, playerY);

                                Console.Write('C');

                            }
                            break;
                        case ConsoleKey.DownArrow:
                            break;
                        case ConsoleKey.LeftArrow:
                            if (ChasseurY > 0)
                            {   //effacer le joueur
                                Console.SetCursorPosition(playerX, playerY);
                                Console.Write(' ');
                                //deplacer le joueur
                                ChasseurX--;
                                //dessine le joueur
                                Console.SetCursorPosition(playerX, playerY);

                                Console.Write('C');

                                break;
                        case ConsoleKey.RightArrow:
                            break;
                    }
                    toucheAppuyee = Console.ReadKey();
                } 

                Console.ReadKey();

                Monstre M = new Monstre();
                M.NombreDeMonstres = 2;

                //nombre entre 1 et 6
              
                
                int de = Random.RNG.Next(1, 7);
                
                Chasseur C = new Chasseur();
                Console.WriteLine(C.description());

                But B = new But();
                Console.WriteLine(B.description());

                bouclier b = new bouclier();
                Console.WriteLine(b.description());

                epee e = new epee();
                Console.WriteLine(e.description());

                potion o = new potion();
                Console.WriteLine(o.description());

                pic i = new pic();
                Console.WriteLine(i.description());
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }
        
    }


}
