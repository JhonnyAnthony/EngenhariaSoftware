using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Permissions;
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
                //MOSTRA OS DADOS DO ALUNO
                view.ShowData(this._colecaoAlunos[this._posicao]);
                //PERGUNTA SE DESEJA ALTERAR,EXCLUIR,VOLTAR
                answer = view.Question("Deseja Alterar/Excluir/Volta [A/E/V]:");
                // SE ALTERAR 
                if (answer == "A")
                {
                    //if ()
                    view.JoinData("DT", studant);

                    //PERGUNTA OS NOVOS DADOS 
                    answer = view.Question("Confirma Alteração (S/N): ");
                    //PERGUNTA SE CONFIRMA A ALTERACAO
                    if (answer == "S")
                        // SE SIM
                    {
                        // ATUALIZA OS DADOS DO ALUNO NA COLECAO
                        this._colecaoAlunos[this._posicao]= studant;
                        
                    }
                }


                // SE EXCUIR
                else if (answer == "E")
                {
                    // PERGUNTA SE CONFIRMA EXCLUSAO
                    answer = view.Question("Confirma Exclusão (S/N)? ");
                    // SE SIM, APAGA O ALUNO DA COLECAO
                    if (answer == "S") { this._colecaoAlunos.RemoveAt(this._posicao);}
                }
            }


        }
    }
}
