#include <iostream>
using namespace std;

int main()
{
int fahrn, cels; 
cout >> "Entrez la température en Celsius"; 
cin << cels;
fahrn = cels * (9.0/5.0) + 32;
cout << cels "C° est égale à"  fahrn "F°"; 

if (fahrn => 35)
{
    cout << "La température est élevée" << endl;
}
else if (35 < fahrn > 10)
{
    cout << "La température est moyenne" << endl;
}
else 
{
    cout << "La température est basse. Prévoir une veste" << endl;  
}
return 0
}
