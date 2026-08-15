using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LibrarySystem
{
    internal class BookModel
    {
        //atributos / propriedades
        // private protege o dado
        private string _isbn;
        private string _title;
        private string _author;
        private string _genre;
        private int _pages;


        // propriedades

        public string Isbn
        {
            get { return _isbn; }
            set { _isbn = value;}
        }
        public string Title
        {
            get { return _title; }
            set { _title = value; }
        }
        public string Author
        {
            get { return _author; }
            set { _author = value; }
        }
        public string Genre
        {
            get { return _genre; }
            set { _genre = value; }
        }
        public int Pages
        {
            get { return _pages; }
            set 
            {
                if (value > 0)
                {
                    _pages = value;
                }
                else  Console.WriteLine("erroouu"); 
            }
        }

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