// Week 04 - Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <stdafx.h>

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int count_vowels(string line)
{

    int i, vowels = 0;
    int A = 0, O = 0, I = 0, E = 0, U = 0, R = 0, X = 0, Z = 0;
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

        else if (line[i] == 'i' || line[i] == 'I')
        {
            I++;
            vowels++;
        }

        else if (line[i] == 'u' || line[i] == 'U')
        {
            U++;
            vowels++;
        }
        else if (line[i] == 'r' || line[i] == 'R')
        {
            R++;
            vowels++;
        }
        else if (line[i] == 'x' || line[i] == 'X')
        {
            X++;
            vowels++;
        }
        else if (line[i] == 'z' || line[i] == 'Z')
        {
            Z++;
            vowels++;
        }
    }
    cout << "The number of A's:......................" << A << endl;
    cout << "The number of E's:......................" << E << endl;
    cout << "The number of I's:......................" << I << endl;
    cout << "The number of O's:......................" << O << endl;
    cout << "The number of U's:......................" << U << endl;
    cout << "The number of R's:......................" << R << endl;
    cout << "The number of X's:......................" << X << endl;
    cout << "The number of Z's:......................" << Z << endl;
    return vowels;
}
int main(int argc, char* Constitution_of_the_United_States[])
{
    ifstream infile;
    infile.open(Constitution_of_the_United_States[1]);
    cout << "Analyzing file data.txt'Constitution_of_the_United_States.txt'....." << endl;
    cout << "*****************************************************" << endl;
    cout << "*********Welcome to my Letter Count Program**********" << endl;
    cout << "*****************************************************" << endl;
    string s;
    int i, vowels;
    //call to function
    while (Constitution_of_the_United_States(infile, s))
    {
        vowels = count_vowels(s);
        cout << "The vowels count is:...................." << vowels << endl;
        cout << endl;
    }

    return 0;
}

