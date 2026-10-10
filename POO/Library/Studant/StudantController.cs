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
        private bool FindCode(string matricula) 
        {
            bool find = false;
            // FAZER BUSCA
            for (int i = 0; i < this._colecaoAlunos.Count; i++)
            { 
                if (this._colecaoAlunos[i].Matricula == matricula) 
                {
                    this._posicao = i;
                    find = true;
                    break;
                }
            }
            return find; 
        }

        public void ExecCrud()
        {

            // MOSTRA A TELA
            StudantView view = new StudantView();
            StudantModel studant = new StudantModel();
            string answer;
            view.ShowForm();
            // PERGUNTA O CODIGO
            view.JoinData("PK",studant);

            // BUSCA PELO CODIGO,
            bool find= this.FindCode(studant.Matricula);

            // SE NAO ACHOU
            //  {

            //  }
            if (!find)
            {
                //      AVISA QUE NAO ACHOU E PERGUNTA E DESEJA CADASTRAR
                answer = view.Question("Matricula não encontrada! Deseja cadastrar? (S/N) ");
                if (answer == "S") 
                {
                    //SE SIM
                    // {
                    //      PERGUNTA OS OUTROS DADOS DO ALUNO,
                    //      PERGUNTA SE CONFIRMA O CADSATRO
                    //  }
                    view.JoinData("DT", studant);
                    answer = view.Question("Confirma o cadastro (S/N): ");
                    if (answer == "S") 
                    {
                        //ADICIONA O NOVO ALUNO A COLECAO
                        this._colecaoAlunos.Add(studant);
                    }
                }
            }
            else 
            {
                Console.SetCursorPosition(20, 20);
                Console.Write("É OS GURI");
                Console.ReadKey();
                //MOSTRA OS DADOS DO ALUNO, PERGUNTA SE DESEJA ALTERAR,EXCLUIR,VOLTAR
                // SE ALTERAR 
                    //PERGUNTA OS NOVOS DADOS 
                    //PERGUNTA SE CONFIRMA A ALTERACAO
                    // SE SIM
                        // ATUALIZA OS DADOS DO ALUNO NA COLECAO
                // SE EXCUIR
                    // PERGUNTA SE CONFIRMA EXCLUSAO
                // SE SIM APAGA O ALUNO DA COLECAO
            }


        }
    }
}
