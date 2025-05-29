using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public class PIC
    {
        private Random random;

        public PIC()
        {
            random = new Random();
        }

        public bool UtiliserPic()
        {
            bool sEstBrise = false;

            // Logique pour vérifier si le pic se brise après son utilisation (1 chance sur 3)
            int chanceBrisure = random.Next(1, 4); // Génère un nombre aléatoire entre 1 (inclus) et 4 (exclus)
            if (chanceBrisure == 3)
                sEstBrise = true;

            return sEstBrise;
        }
    }
}
