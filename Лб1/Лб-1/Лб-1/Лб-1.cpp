#include "pch.h"
#include <Windows.h>
using namespace System;

int main(array<System::String^>^ args)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // P-1
    String^ input1 = "Телевізор";
    String^ modified1 = "begin " + input1 + " end";
    Console::WriteLine("P-1: {0}", modified1);
    Console::WriteLine("Довжина: {0}", modified1->Length);

    // P-2
    String^ str1 = "Привіт";
    String^ str2 = "Світ";
    String^ combined = str1 + " " + str2;
    Console::WriteLine("P-2: {0}", combined);

    // P-3
    String^ cmp1 = "Пляшос";
    String^ cmp2 = "Посудомийка";
    int result = String::Compare(cmp1, cmp2);
    Console::WriteLine("P-3: Порівняння: {0}, result == 0 ? \"Рядки однакові\" : (result < 0 ? \"Перший менший\" : \"Перший більший\")");

    // P-4
    String^ original = "Навушники";
    array<wchar_t>^ chars = original->ToCharArray();
    Array::Reverse(chars);
    String^ reversed = gcnew String(chars);
    Console::WriteLine("P-4: {0}", reversed);

    // P-5
    String^ line1 = "Коли алгоритм працює вдало, програміст усміхається так, ніби щойно виграв у лотерею";
    String^ line2 = "Є сотні байтів і лише одна помилка може перетворити геніальну ідею на нічну зміну з кавою";
    Console::WriteLine("P-5: Довший рядок: {0}", line1->Length > line2->Length ? "line1" : "line2");

    return 0;
}
