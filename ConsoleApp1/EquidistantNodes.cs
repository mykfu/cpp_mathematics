using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    public class EquidistantNodes : Nodes
    {

        public EquidistantNodes(uint count, double left, double right) : base(count, left, right)
        { }


        public override double this[int index]
        {
            get 
            {
                return Left + index * (Right - Left) / (Count - 1);
            }
        }
    }
}
