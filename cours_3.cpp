#include <iostream>
using namespace std;

int Fahrenheit_to_Celsius (cels, fahrn) 
int main()
{int cels, fahrn
cin >> "Entrez la température en Fahrenheit";
cin >> fahrn;
cels = (fahrn - 32)* 5/9
cout << fahrn "F° est égale à"  cels "C°"; 

if (cels => 25)
{
    cout << "La température est élevée" << endl;
}
else if (25 < cels > 15)
{
    cout << "La température est moyenne" << endl;
}
else 
{
    cout << "La température est basse. Prévoir une veste" << endl;  
}
return cels


int Celsius_to_Fahrenheit(fahrn, cels)
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
return fahrn
}

class Person{
public:
    string my_last_name;
    string my_first_name;
    int age;
};

int main()
{
Person Me;
    Person.my_last_name = "RRRR";
    Person.my_first_name = "IIII";
    Person.age = 30
}
