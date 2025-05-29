using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public class Carte
    {
        private int hauteur;
        private int largeur;

        public int Hauteur
        {
            get { return hauteur; }
            set
            {
                if (value >= 0 && value <= 20)
                    hauteur = value;
                else
                    throw new ArgumentOutOfRangeException("La hauteur doit être entre 0 et 20.");
            }
        }

        public int Largeur
        {
            get { return largeur; }
            set
            {
                if (value >= 0 && value <= 30)
                    largeur = value;
                else
                    throw new ArgumentOutOfRangeException("La largeur doit être entre 0 et 70.");
            }
        }
    }
}
