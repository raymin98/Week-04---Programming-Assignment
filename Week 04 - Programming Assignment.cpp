// Week 04 - Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <stdafx.h>
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
//this function count the vowels
int count_vowels(string line)
{
    //variables
    int i, vowels = 0;
    int A = 0, O = 0, I = 0, E = 0, U = 0;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == 'a' || line[i] == 'A')
        {
            A++;
            vowels++;
        }
        else if (line[i] == 'e' || line[i] == 'E')

        {
            E++;
            vowels++;

        }
        else if (line[i] == 'o' || line[i] == 'O')
        {
            O++;
            vowels++;

        }

        else if (line[i] == 'I' || line[i] == 'i')
        {
            I++;
            vowels++;
        }

        else if (line[i] == 'u' || line[i] == 'U')
        {
            U++;
            vowels++;
        }

    }
    cout << "The number of A's:......................" << A << endl;
    cout << "The number of E's:......................" << E << endl;
    cout << "The number of I's:......................" << I << endl;
    cout << "The number of O's:......................" << O << endl;
    cout << "The number of U's:......................" << U << endl;
    return vowels;
}
int main(int argc, char* argv[])
{
    ifstream infile;
    infile.open(argv[1]);
    cout << "Analyzing file data.txt........." << endl;
    cout << "******************" << endl;
    cout << "***Welcome to my Letter Count Program***" << endl;
    cout << "******************" << endl;
    string s;
    int i, vowels;
    //call to function
    while (getline(infile, s))
    {
        vowels = count_vowels(s);
        cout << "The vowels count is:...................." << vowels << endl;
        cout << endl;
    }

    return 0;
}
