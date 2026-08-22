using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LibrarySystem
{
    internal class Screen
    {
        //atributos
        private ConsoleColor _backgroudColor;
        private ConsoleColor _textColor;
        
        // propriedades
        public ConsoleColor BackgroundColor
        {
            get { return _backgroudColor; }
            set { _backgroudColor = value; }
        }

        public ConsoleColor TextColor
        {
            get { return _textColor; }
            set { _textColor = value; }
        }

        //metodo contrutor
        public Screen() 
        {
            this.BackgroundColor = ConsoleColor.White;
            this.TextColor = ConsoleColor.Blue;
        }
        public Screen(ConsoleColor background, ConsoleColor text)
        {
            this.BackgroundColor = background;
            this.TextColor = text;
        }


        //outros métodos
        public void SetupScreen()
        {
            Console.ForegroundColor = this.TextColor;
            Console.BackgroundColor = this.BackgroundColor;
            Console.Clear();
        }

        public void FrameAssembly(int initColumn,int initRow, int finalColumn,int finalRow)
        {
            int column, row;
            //horizontal
            for(column = initColumn;column<= finalColumn;column++)
            {
                Console.SetCursorPosition(column, initRow);
                Console.Write("═");

                Console.SetCursorPosition(column, finalRow);
                Console.Write("═");
            }
            //vertical
            for(row = initRow;row<= finalRow;row++)
            {
                Console.SetCursorPosition(initColumn, row);
                Console.Write("║");
                Console.SetCursorPosition(finalColumn, row);
                Console.Write("║");
            }
            //canto
            Console.SetCursorPosition(initColumn, initRow);
            Console.Write("╔");
            Console.SetCursorPosition(finalColumn, initRow);
            Console.Write("╗");
            Console.SetCursorPosition(initColumn, finalRow);
            Console.Write("╚");
            Console.SetCursorPosition(finalColumn, finalRow);
            Console.Write("╝");
        }
    }
}
