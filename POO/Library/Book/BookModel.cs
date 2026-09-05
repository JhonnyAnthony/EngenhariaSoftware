using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    // CLASSE ANEMICA - Não possui regras de negócio, apenas atributos, propriedades e construtores
    internal class BookModel
    {
        // atributos
        // PADRÃO PARA ATRIBUSTOS 
        // private tipo _nomeAtributo;
        private string _id;
        private string _title;
        private string _author;
        private string _gender;

        // propriedades (get/set)
        // PADRÃO PARA PROPRIEDADES
        // public tipo NomePropriedade {get {}; set{}}
        // public tipo NomePropriedade {get => _nomePropriedade; set => _title = value;}

        public string Id { get => _id; set => _id = value; }
        public string Title { get => _title; set => _title = value; }
        public string Author { get => _author; set => _author = value; }
        public string Gender { get => _gender; set => _gender = value; }

        // construtores

        public BookModel(string id, string title, string author, string gender)
        {
            this.Id = id;
            this.Title = title;
            this.Author = author;
            this.Gender = gender;
        }

        public BookModel() {
            this.Id = "";
            this.Title = "";
            this.Author = "";
            this.Gender = "";
        }
    }
}
