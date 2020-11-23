using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
	public abstract class Nodes {
		protected UInt32 count;
		protected Double left, right;

        public Nodes(uint count, double left, double right)
        {
            this.count = count;
            this.left = left;
            this.right = right;
        }

		public UInt32 Count {
			get
			{
				return count;
			}

			set
			{
				count = value;
			}
		}

		public Double Left {
			get
			{
				return left;
			}

			set
			{
				left = value;
			}
		}

		public Double Right
		{
			get
			{
				return right;
			}

			set
			{
				right = value;
			}
		}

		public abstract Double this[int index]
        {
            get;
        }

		public void Print()
        {
			Console.Write("Nodes[");

            for (int i = 0; i < count; i++)
            {
				Console.Write(this[i] + (i < count - 1 ? ", " : ""));
            }

			Console.WriteLine("]");

        }

		public Double[] ToArray()
        {
			Double[] result = new Double[count];

			for (int i = 0; i < count; i++)
			{
				result[i] = this[i];
			}

			Console.WriteLine("]");
			return null;
        }

};


}
