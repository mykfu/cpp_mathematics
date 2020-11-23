using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    class ChebyshevNodes : Nodes
    {

        public ChebyshevNodes(uint count, double left, double right) : base(count, left, right)
        { }


        public override double this[int index]
        {
            get
            {
                return 0;
            }
        }
    }
}
