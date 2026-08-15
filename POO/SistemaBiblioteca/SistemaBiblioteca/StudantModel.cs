using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LibrarySystem
{
    internal class StudantModel
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

        // propriedades


        // método construtor
        public StudantModel(int mat, string nom, string cur, string tel, string eml, string cpf)
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
