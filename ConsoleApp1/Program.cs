﻿using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            EquidistantNodes equidistant = new EquidistantNodes(3, -1, 1);
            equidistant.Print();

        }
    }
}