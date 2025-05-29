using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ProjetLP
{
    public partial class choix_de_niveau : Form

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
        private static List<string> actions = new List<string>();

        public static void Main()
        {
            // ... (le code précédent pour sélectionner une carte reste inchangé)

            // Après avoir chargé la carte sélectionnée, affichez-la et démarrez le jeu
            string nomCarteChoisie = maps[choixCarte];
            string cheminCarte = Path.Combine("chemin_vers_vos_fichiers_de_carte", nomCarteChoisie); // Mettez le chemin approprié ici

            string[] lignesCarte = File.ReadAllLines(cheminCarte);
            AfficherCarte(lignesCarte);

            // Commencez le jeu en utilisant la carte choisie
            CommencerPartie(nomCarteChoisie);
        }

        public static void AfficherCarte(string[] lignesCarte)
        {
            foreach (string ligne in lignesCarte)
            {
                Console.WriteLine(ligne);
            }
        }

        public static void CommencerPartie(string carteChoisie)
        {
            // Exemple d'actions fictives pour simuler des événements sur la carte
            EnregistrerAction("Le chasseur a trouvé un bouclier.");
            EnregistrerAction("Le chasseur inflige 7 de dommages au monstre (5 HP restants).");
            EnregistrerAction("Le monstre inflige 3 de dommages au chasseur.");

            // Afficher les trois dernières actions
            AfficherDernieresActions();
        }

        public static void EnregistrerAction(string action)
        {
            actions.Add(action);
        }

        public static void AfficherDernieresActions()
        {
            int nombreActionsAffichees = 3;

            Console.WriteLine("Dernières actions sur la carte :");
            int startIndex = Math.Max(0, actions.Count - nombreActionsAffichees);
            for (int i = startIndex; i < actions.Count; i++)
            {
                Console.WriteLine(actions[i]);
            }
        }
        public static void CommencerPartie(string carteChoisie)
        {
            // Code pour démarrer le jeu avec la carte sélectionnée
            // Placez ici la logique pour commencer le jeu avec la carte choisie
        }


        public choix_de_niveau()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
