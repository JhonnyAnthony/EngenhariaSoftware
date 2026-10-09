using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    internal class StudantController
    {
        // atributos
        private List<StudantModel> _colecaoAlunos;

        private int _posicao;

        // construtor
        public StudantController()
        {
            this._colecaoAlunos = new List<StudantModel>();
            // adiciona 1 aluno na coleção para testarmos a consulta posteriormente
            this._colecaoAlunos.Add(
                new StudantModel("123", "Zé Colmeia", "zecolmeia@gmail.com", "99967-8976")
            );
        }

        public void ExecCrud()
        {
        }
    }
}
