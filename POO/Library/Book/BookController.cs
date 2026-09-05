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
        // DECLARAÇÃO DE ATRIBUTOS
        private BookModel _bookModel;
        private BookView _bookView;
        private List<BookModel> _bookModels;

        // construtor
        public BookController()
        {
            // INSTANCIAÇÃO DE ATRIBUTOS
            this._bookModel     = new BookModel();
            this._bookView      = new BookView();
            this._bookModels    = new List<BookModel>();
        }

        // métodos
        // orquestrador do CRUD
        public void RunCRUD() {
            this._bookView.BuildScreen(10, 5, "Cadastro");
        }
    }
}
