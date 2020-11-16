// Write a program to ask for Part number, part name, part class, number in stock and unit price.  
//  The data should be read into a struct and passed to a function which writes it out to a data file.  
//  Part number and name will be strings, part class is a character, number in stock is an integer and unit price is  a double.  
//  Enclose your program in a do while which asks the user if he/she wants to enter more parts. 

// Typical run:
// ******************************************************************************************************************************
// * Enter part information (part number, name, class, on hand balance and price);
// * ------------------------------------------------------------------------------
// * -  P-14376 Widget B 120 34.95                                                -
// * -  More parts? Y or N                                                        -
// * -  y                                                                         -
// * -  P-16543 Wodget C 80 15.75                                                 -
// * -  More parts? Y or N                                                        -
// * -  n                                                                         -
// * ------------------------------------------------------------------------------
// * Part name will be a string without spaces

#include<iostream>
#include<fstream>
using namespace std;

struct Part {
    string number,name;
    char c;
    int numInStock;
    double unitPrice;
};

int main()
{
    struct Part p[100];
    int n = 0,i;
    char ch;
    do {
    cout << "Enter part information (part number, name, class, on hand balance and price):" << endl;
    cin >> p[n].number >> p[n].name >> p[n].c >> p[n].numInStock >> p[n].unitPrice;
    cout << "\nMore parts? Y or N\n";
    cin >> ch;
    n++;
    } while(ch == 'Y' || ch == 'y');

    ofstream output("partInfor.txt");
    for (i = 0; i < n; i++) {
    output << p[i].number << "\t" << p[i].name << "\t" << p[i].c << "\t" << p[i].numInStock << "\t" << p[i].unitPrice << endl;
    }

    cout << "\n...Data is saved into file 'partInfor.txt' Successfully...";
    output.close();

    return 0;
}