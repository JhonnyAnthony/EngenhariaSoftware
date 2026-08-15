using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LibrarySystem
{
    internal class BookModel
    {
        public string Isbn;
        public string Title;
        public string Author;
        public string Genre;
        public int Pages;


        // método construtor (SEMPRE TEM QUE TER O MESMO NOME DA CLASSE)
        //TIPO //NOME    //Assinatura do Método Construtor
        public BookModel(string isbn,string title,string author,string genre,int page)
        {
            //CORPO DO METODO CONSTRUTOR
            this.Isbn = isbn;
            this.Title = title;
            this.Author = author;
            this.Genre = genre;
            this.Pages = page;
    }
    }
}
