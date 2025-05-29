using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProjetLP
{
    public class erreur
    {

        public void gererErreur(string classe, string nomFonction,Exception erreur)

        {
            string erreurComplete = $"Une erruer est survenue " + $"dans la fonction {nomFonction} de la classe " + $"{classe}: {erreur.Message}";
            //save file (streamWriter)

            throw new Exception(erreurComplete, erreur);
        }

    }
}
