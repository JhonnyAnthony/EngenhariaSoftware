using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LibrarySystem
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.Clear(); // limpa a tela

            Console.SetCursorPosition(10,5);   // posiciona o cursor
            Console.WriteLine("Sistema de Biblioteca");   // imprime um texto

            /*
             Aluno aluno1 = new Aluno();
             aluno1.matricula = 123;
             aluno1.nome = "Ze Colmeia";
             aluno1.nomeCurso = "Marketing";
             aluno1.email = "zecolmeia@gmail.com";
             aluno1.cpf = "123.456.789-00";
             aluno1.telefone = "047 98867-8976";

             Aluno aluno2 = new Aluno();
             aluno2.matricula = 124;
             aluno2.nome = "Catatau";
             aluno2.email = "catatau98@gmail.com";
             aluno2.cpf = "097.456.632-90";
             aluno2.telefone = "047 99123-7812";
            */

            StudantModel aluno1 = new StudantModel(
                123, 
                "Ze Colmeia", 
                "Marketing", 
                "444", 
                "zec@uol.com.br", 
                "333"
            );

            StudantModel aluno2 = new StudantModel(
                1233,
                "Jhonny",
                "TI",
                "234",
                "jhonny@uol.com.br",
                "1233"
            );

            BookModel book1 = new BookModel(
                "123",
                "Homem Aranha", 
                "Mary Janne",
                "Fantasia", 
                777
            );
            
            BookModel book2 = new BookModel(
                "1234",
                "Homem Aranha 2",
                "Mary Janne",
                "Fantasia",
                -1
            );


            Console.SetCursorPosition(11, 7);
            Console.WriteLine(aluno1.nome + " estuda " + aluno1.nomeCurso);
            Console.SetCursorPosition(11, 8);
            Console.WriteLine("pAGINA: " + book2.Pages);
            //Console.WriteLine(book1.nome + " estuda " + aluno2.nomeCurso);




            Console.ReadKey();   // espera uma tecla qualquer ser acionada


        }
    }
}
