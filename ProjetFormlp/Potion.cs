using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public enum TypePotion
    {
        PotionForce,
        PotionEmpoisonnee,
        PotionInvisibilite,
        PotionVitesse
    }

    public class Potion
    {
        public TypePotion Type { get; private set; }

        public Potion()
        {
            Random random = new Random();
            int resultatDe = random.Next(1, 7);

            // Choix du type de potion en fonction du résultat du dé
            switch (resultatDe)
            {
                case 1:
                    Type = TypePotion.PotionEmpoisonnee;
                    break;
                case 6:
                    Type = TypePotion.PotionForce;
                    break;
                case 2:
                case 3:
                    Type = TypePotion.PotionVitesse;
                    break;
                default:
                    Type = TypePotion.PotionInvisibilite;
                    break;
            }
        }
    }
}
