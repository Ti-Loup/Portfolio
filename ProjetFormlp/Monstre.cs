using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public class Monstre : joueur
    {
        public Monstre(int X, int Y) : base(X, Y)
        {
            FreezeTime = 2000; // 2 secondes en millisecondes
        }

        public void DeplacerMonstre(int nouvelleX, int nouvelleY)
        {
            // Vérifier si la nouvelle position est valide pour le déplacement du monstre
            if (nouvelleX >= 0 && nouvelleX <= largeurCarte && nouvelleY >= 0 && nouvelleY <= hauteurCarte)
            {
                // Déplacer uniquement s'il n'y a pas de mur ni de chasseur à la nouvelle position
                // Logique de déplacement du monstre ici
                PositionX = nouvelleX;
                PositionY = nouvelleY;
            }
        }
    }

    public class GestionMonstres
    {
        private List<Monstre> listeMonstres = new List<Monstre>();

        public void AjouterMonstre(Monstre monstre)
        {
            listeMonstres.Add(monstre);
        }

        public List<Monstre> TrouverMonstres(int X, int Y)
        {
            List<Monstre> monstresTrouves = new List<Monstre>();

            foreach (Monstre monstre in listeMonstres)
            {
                if (monstre.PositionX == X && monstre.PositionY == Y)
                {
                    monstresTrouves.Add(monstre);
                }
            }

            return monstresTrouves;
        }
    }
}
