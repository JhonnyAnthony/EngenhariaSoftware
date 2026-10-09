using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    internal class BookController
    {
        // atributos
        private List<BookModel> _colecaoLivros;

        private BookModel _livro;
        private BookView _bookView;

        private int _posicao;

        // construtor
        public BookController()
        {
            this._bookView = new BookView();
            this._livro = new BookModel();

            this._colecaoLivros = new List<BookModel>();
            // adiciona 1 livro na coleção para testarmos a consulta posteriormente
            this._colecaoLivros.Add(
                new BookModel("123", "Faca", "Jo Nesbo", "Policial", 450)
            );
        }

        public void ExecCrud()
        {
            this._bookView.ShowForm();
            this._livro = this._bookView.JoinData("PK");
        }

    }
}
