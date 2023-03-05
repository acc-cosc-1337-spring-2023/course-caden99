// add include statements
#include "func.h"
#include <iostream>
using std::string;
using std::cout; using std::cin;
// add function code here

double get_gc_content(const string &dna)
{
    double count = 0;
    double total = dna.length();

    for (int i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'C' || dna[i] == 'c' || dna[i] == 'G' || dna[i] == 'g')
            count++;
    }

    return count / total;
}

string get_dna_complement(string dna)
{
    string complement = "";
    dna = reverse_string(dna);

    for(int i=0; i<dna.length(); i++)
    if (dna[i] == 'A')
    {
        complement += 'T';
    }
    else if (dna[i] == 'T')
    {
        complement += 'A';
    }

    else if (dna[i] == 'C')
    {
        complement += 'G';
    }
    else if (dna[i] == 'G')
    {
        complement += 'C';
    }

    return complement;
}

string reverse_string(string dna)
{
    string reverse = "";

    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reverse += dna[i];
    }

    return reverse;
}

void display_menu()
{
cout<<"1- Get GC Content\n";
cout<<"2- Get DNA Complement\n";
cout<<"3- Exit\n";

}

void run_menu()
{
    auto choice = 0;

    do
    {
        display_menu();
        cout<<"Enter menu choice: ";
        cin>>choice;

        handle_menu_option(choice);

    }while(choice >= 1 || choice <= 3);
}

void handle_menu_option(int choice)
{   
    string dna = "";
    switch(choice)
    {
        
        case 1:
            cout<<"Type in GC string to determine GC-Content: ";
            cin>>dna;
            cout<<"The GC-Content of your string is: "<<get_gc_content(dna)<<"\n";
            break;
            
        case 2:
            cout<<"Type in DNA string to output DNA complement: ";
            cin>>dna;
            cout<<"Complement: " << get_dna_complement(dna)<<"\n";
            break;
        
        case 3:
            cout<<"Exiting...\n";
            abort();
            break;

        default:
            cout<<"Please choose option 1, 2, or 3.\n";

    }
}
