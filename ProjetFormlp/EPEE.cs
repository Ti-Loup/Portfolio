using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public class EPEE
    {
        private Random random;
        private int force;

        public int Force
        {
            get { return force; }
            private set { force = value; }
        }

        public EPEE()
        {
            random = new Random();
            force = random.Next(4, 10); // Génère un nombre aléatoire entre 4 (inclus) et 10 (exclus)
        }

        public bool Attaquer()
        {
            bool sEstBrisee = false;

            // Logique pour vérifier si l'épée se brise après l'attaque (1 chance sur 5)
            int chanceBrisure = random.Next(1, 6); // Génère un nombre aléatoire entre 1 (inclus) et 6 (exclus)
            if (chanceBrisure == 5)
                sEstBrisee = true;

            return sEstBrisee;
        }
    }
}
