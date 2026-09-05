using System;
using System.Collections.Generic;

namespace Library
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //MVC - Model , View , Controller
            //Model - Dados
            //View - Tela
            //Controller - Regras e Sequencia de Tarefas

            //EXEMPLOS:
            //Cada funcionalidade do sistema terá uma **entidade de negocio** Model, View e Controller
            //LivroModel, LivroView, LivroController
            //AlunoModel, AlunoView, AlunoController
            //Classes Auxiliares
            //Tela
            Screen myScreen = new Screen(ConsoleColor.Magenta, ConsoleColor.Gray);
            myScreen.ConfigureScreen();
            BookController bookController = new BookController();

            int op;

            List<string> optionsMenu = new List<string>();
            optionsMenu.Add("1  -  Books      ");
            optionsMenu.Add("2  -  Studants   ");
            optionsMenu.Add("3  -  Loans      ");
            optionsMenu.Add("4  -  Relatórios ");
            optionsMenu.Add("0  -  Sair       ");

            while (true)
            {
                myScreen.BuildScreen(0, 0, 79, 24, "Library Sistem");
                op = int.Parse(myScreen.ShowMenu(optionsMenu, 2, 2));

                if (op == 0)
                {
                    Console.WriteLine("Saindo do sistema...");
                    break;
                }
                else if (op == 1) { 
                    bookController.RunCRUD();
                }
            }
        }
    }
}
