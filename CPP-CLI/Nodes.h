#pragma once
using namespace System;
ref class Nodes
{
private:
	unsigned int count;
	Double left, right;

public:
	Nodes(unsigned int count);
	Nodes(unsigned int count, Double left, Double right);

	property unsigned int Count {
		unsigned int get() {
			return count;
		}

		void set(unsigned int count) {
			this->count = count;
		}
	}

	property Double Left {
		Double get() {
			return count;
		}

		void set(Double count) {
			this->count = count;
		}
	}

	property Double Right {
		Double get() {
			return count;
		}

		void set(Double count) {
			this->count = count;
		}
	}


	property Double default[int]{
		Double get(int index);
	}

	void print();

	array<Double>^ toArray();

};

