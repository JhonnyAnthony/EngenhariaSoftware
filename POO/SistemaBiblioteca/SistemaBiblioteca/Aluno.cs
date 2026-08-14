using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SistemaBiblioteca
{
    internal class Aluno
    {
        //
        // atributos / propriedades
        //
        public int matricula;
        public string nome;
        public string nomeCurso;
        public string cpf;
        public string telefone;
        public string email;

        //
        // operações / métodos
        //

        // método construtor
        public Aluno( int mat, string nom, string cur, string tel, string eml, string cpf )
        {
            this.matricula = mat;
            this.nome = nom;
            this.nomeCurso = cur;
            this.telefone = tel;
            this.email = eml;
            this.cpf = cpf;
        }

    }
}
