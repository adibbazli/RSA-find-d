#include<iostream>
#include<math.h> // to use fmod
#include<cstdlib>
using namespace std;
// Written by Adib Bazli
// You may reuse, distribute or resell it
// This program brute force e*d mod fn = 1
// This program does not come with warranty and I will not responsible with any damage may cause by this program
// If you enter wrong number infinite loop may occur, please do reset the program
int main()
{
    int d;
    float e, n, fn, p, q, sas = 0;

    cout << "Find d for RSA by Adib Bazli, UTMKL 2018\n" << endl;

    cout << " Enter prime number for p and q\n";
    cout << " Enter p : ";
    cin >> p;
    cout << " Enter q : ";
    cin >> q;

    fn = (p-1)*(q-1);

    cout << "\n fn is " << fn << endl << "\n Enter e : ";
    cin >> e;

    if(e >= fn )
    {
        cout << " e cant be bigger than fn";
        return 0;
    }

    fn = (p-1)*(q-1);
    n = p*q;
    float notD = 0.0;
    while(sas != 1)
    {
        notD++;
        sas = e * notD;
   // /*Debug*/    cout << "pow " << sas << endl;
        sas = fmod(sas, fn);
   // /*Debug*/    cout << sas << " " << notD << endl;

    }

    d = notD;

    cout << "\n n is : " << n << endl;
    cout << " fn is : " << fn << endl;
    cout << " e is : " << e << endl;


    cout << "\n d is : " << d << endl;

    system("pause");

}
