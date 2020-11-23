#include "pch.h"
#include <iostream>

using namespace System;

class Foo {
    int n;

public:
    Foo() {}
    Foo(int n) {
        this->n = n;
    }
};

ref class Bar {
private:
    int n;

public:

    property int Size {
        int get() {
            return n;
        }

        void set(int n) {
            this->n = n;
        }
    }
    static property int Counter;

    Bar() {}
    Bar(int n) {
        this->n = n;
        Counter++;
    }

    Bar^ operator+(int i) {
        return gcnew Bar(this->n + i);
    }


};

ref class MyArray {
private:
    int size;
    array<Int32>^ arr;

public:
    MyArray(int size) {
        arr = gcnew array<Int32>(size);
    }

    property Int32 default[int] {
        Int32 get(int index) {
            return arr[index];
        }

        void set(int index, Int32 value) {
            arr[index] = value;
        }
    }

    property Int32 indexer[int] {
        Int32 get(int index) {
            return arr[index];
        }

        void set(int index, Int32 value) {
            arr[index] = value;
        }
    }



};

value class Baz {
    int n;

public:
    Baz(int n) {
        this->n = n;
    }
};

interface class IConvertable {
    double A2B(double a);
    double B2A(double b);
};

ref class Converter : IConvertable {

public:

    // Унаследовано через IConvertable
    virtual double A2B(double a)
    {
        return 0.0;
    }

    virtual double B2A(double b)
    {
        return 0.0;
    }

};

int main()
{
    System::Console::Write("asdf");
    System::Console::WriteLine("asdf");
    System::Console::WriteLine("num is {0:d}", 10);
    std::cout << "message";

    Int32 i; // 4byte
    Double d;
    Boolean b;
    UInt16 sh; // 2byte

    Foo foo;
    Foo foo3(100);
    Foo* foo2 = new Foo(100);

    Bar^ bar = gcnew Bar(123);

    Console::WriteLine("\nBefore " + bar->Size);
    bar->Size = 10;
    Console::WriteLine("After " + bar->Size);

    Bar^% bar2 = gcnew Bar(123);

    Baz baz(100);

    int size = 10;
    array<double>^ arr = gcnew array<double>(size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = 123;
    }

    array<Int32, 2>^ matr = gcnew array<int, 2>(size, 2);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matr[i, j] = 1. / i;
        }
    }

    for each (double current in arr)
    {
        Console::WriteLine(current);
    }

    MyArray^ ma = gcnew MyArray(10);

    ma[0] = 10;
    ma->indexer[0] = 10;
    Console::WriteLine(ma->indexer[0]);




    return 0;
}
