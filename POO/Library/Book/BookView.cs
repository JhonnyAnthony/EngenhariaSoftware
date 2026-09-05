using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    internal class BookView
    {
        //atributos

        //construtor

        //métodos
        public void BuildScreen(int col, int lin, string title)
        {
            Screen screenBook = new Screen();
            screenBook.BuildScreen(col, lin, col + 30, lin + 8, "Create Book");
            Console.Read(); // TESTE - para ver a tela antes de fechar
        }
    }
}
