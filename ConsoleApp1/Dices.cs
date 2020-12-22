using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    class Dices
    {

        static void diceRoll(int n, List<int> list) {
            if (n == 0)
            {
                Console.Write("[");
                foreach (int c in list)
                {
                    Console.Write(" " + c);
                }

                Console.WriteLine("]");
            } else
            {
                for (int i = 1; i <= 6; i++)
                {
                    list.Add(i);
                    diceRoll(n - 1, list);
                    list.RemoveAt(list.Count - 1);
                }

            }
        }
        
        static void diceRoll(int n) {
            List<int> list = new List<int>();
            diceRoll(n, list);
        }
        
        static int listSum(List<int> list)
        {
            int result = 0;
            foreach (int c in list)
            {
                result += c;
            }
            return result;
        }
        static void printList(List<int> list)
        {
            Console.Write("[");
            foreach (int c in list)
            {
                Console.Write(" " + c);
            }

            Console.WriteLine("]");
        }
        static int counter = 0;
        static void diceSum(int n, int sum, List<int> list, int curSum) {
            counter++;
            if (n == 0)
            {
                if (curSum == sum)
                {
                    printList(list);
                } else
                {
                    Console.Write("wrong: ");
                    printList(list);
                }
            }
            else if (curSum + n <= sum && curSum + n * 6 >= sum)
            {
                for (int i = 1; i <= 6; i++)
                {
                    list.Add(i);
                    diceSum(n - 1, sum, list, curSum + i);
                    list.RemoveAt(list.Count - 1);
                }

            }
        }
        
        static void diceSum(int n, int sum) {
            List<int> list = new List<int>();
            diceSum(n, sum, list, 0);
        }

        static void Main(string[] args)
        {
            //diceRoll(3);
            diceSum(3, 5);
            Console.WriteLine("counter = " + counter);
        }
    }
}
