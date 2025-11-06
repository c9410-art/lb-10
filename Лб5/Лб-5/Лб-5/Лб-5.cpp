#include "pch.h"
#include <Windows.h>
using namespace System;

int main(array<System::String^>^ args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Введення степеня
    Console::Write("Введи степінь полінома (m): ");
    String^ inputM = Console::ReadLine();
    int m = Convert::ToInt32(inputM);

    if (m < 0)
    {
        Console::WriteLine("Степінь полінома не може бути від’ємним.");
        return 1;
    }

    // Введення коефіцієнтів
    array<double>^ A = gcnew array<double>(m + 1);
    Console::WriteLine("Введи коефіцієнти від старшого до молодшого степеня:");
    for (int i = 0; i <= m; i++)
    {
        Console::Write("a[" + i + "] = ");
        String^ coeffInput = Console::ReadLine();
        A[i] = Convert::ToDouble(coeffInput);
    }

    // Обчислення похідної
    array<double>^ derivative = gcnew array<double>(m);
    for (int i = 0; i < m; i++)
    {
        int power = m - i;
        derivative[i] = A[i] * power;
    }

    // Виведення коефіцієнтів похідної
    Console::WriteLine("\nКоефіцієнти похідної:");
    for each(double coeff in derivative)
    {
        Console::Write(coeff + " ");
    }

    // Виведення похідної як формули
    Console::WriteLine("\n\nПохідна у вигляді формули:");
    bool first = true;
    for (int i = 0; i < m; i++)
    {
        double coeff = derivative[i];
        int power = m - 1 - i;

        if (coeff == 0) continue;

        if (!first && coeff > 0) Console::Write(" + ");
        if (coeff < 0) Console::Write(" - ");
        Console::Write(Math::Abs(coeff));

        if (power > 0) Console::Write("x");
        if (power > 1) Console::Write("^" + power);

        first = false;
    }

    Console::WriteLine();
    return 0;
}

