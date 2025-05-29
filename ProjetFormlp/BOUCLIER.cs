using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public class BOUCLIER
    {
        private Random random;
        private int protection;

        public int Protection
        {
            get { return protection; }
            private set { protection = value; }
        }

        public BOUCLIER()
        {
            random = new Random();
            protection = Random.Next(3, 7); // Génère un nombre aléatoire entre 3 (inclus) et 7 (exclus)
        }

        public bool SubirAttaque()
        {
            bool sEstBrise = false;

            // Logique pour vérifier si le bouclier se brise après l'attaque (1 chance sur 4)
            int chanceBrisure = Random.Next(1, 5); // Génère un nombre aléatoire entre 1 (inclus) et 5 (exclus)
            if (chanceBrisure == 4)
                sEstBrise = true;

            return sEstBrise;
        }
    }
}
