using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library
{
    internal class StudantView
    {
        // atributos
        private int _colIni, _linIni, _colFin, _linFim, _colDados, _linDados;
        private List<string> _campos;

        // construtor
        public StudantView()
        {
            this._campos = new List<string>();
            this._campos.Add("Matrícula : ");
            this._campos.Add("Nome      : ");
            this._campos.Add("Email     : ");
            this._campos.Add("Telefone  : ");

            this._colIni = 15;
            this._linIni = 5;
            this._colFin = _colIni + this._campos[0].Length + 1 + 30;
            // +1 para colocar o traçado vertical direito depois dos :
            // +30 para ter espaço para o usuário digitar os dados
            this._linFim = _linIni + this._campos.Count + 1 + 2;
            // +1 para colocar o traçado horizontal na linha após o último campo
            // +2 para podermos usar um Titulo e um espaço para perguntas
            this._colDados = this._colIni + this._campos[0].Length + 1;
            this._linDados = this._linIni + 2;
        }

        public void ShowForm()
        {

            Screen Screen = new Screen();
            Screen.BuildScreen(
                this._colIni, this._linIni,
                this._colFin, this._linFim,
                "Cadastro de Alunos"
            );


            int linha = this._linDados;
            for (int i = 0; i < this._campos.Count; i++)
            {
                Console.SetCursorPosition(this._colIni + 1, linha);
                Console.Write(this._campos[i]);
                linha++;
            }

            // ou podemos usar o comando foreach
            /*
            foreach (string campo in this._campos)
            {
                Console.SetCursorPosition(this._colIni+1, linha);
                Console.Write(campo);
                linha++;
            }
            */
        }

        public void JoinData(string qual, StudantModel studant)
        { 
            if (qual == "PK")
            {
                // pergunta a chave primária (código)
                Console.SetCursorPosition(this._colDados, this._linDados);
                studant.Matricula = Console.ReadLine();
            }
            else if (qual == "DT")
            {

                Screen screen = new Screen();
                screen.ClearArea(this._colDados, this._linDados + 1, this._colFin - 1, this._linFim - 2);
                    
                
                // pergunta todos os outros dados
                Console.SetCursorPosition(this._colDados, this._linDados+1);
                studant.Nome        = Console.ReadLine();

                Console.SetCursorPosition(this._colDados, this._linDados+2);
                studant.Email       = Console.ReadLine();

                Console.SetCursorPosition(this._colDados, this._linDados+3);
                studant.Telefone    = Console.ReadLine();

            }
        }

        public void ShowData(StudantModel studant)
        {
            Console.SetCursorPosition(this._colDados, this._linDados + 1);
            Console.Write(studant.Nome);

            Console.SetCursorPosition(this._colDados, this._linDados + 2);
            Console.Write(studant.Email);

            Console.SetCursorPosition(this._colDados, this._linDados + 3);
            Console.Write(studant.Telefone);
            Console.ReadKey();
        }
        public string Question(string question)
        {
            string answer = "";
            Console.SetCursorPosition(this._colIni + 1, this._linFim - 1);
            Console.Write(question);
            answer = Console.ReadLine();

            return answer.ToUpper();
        }

    }
}
