#include <iostream>
#include <iomanip>

using namespace std;

float x,y, suma, roznica, iloczyn, iloraz;

int main()
{
    cout<<"Podaj x i y:"<<endl;
    cin>>x>>y;

    suma=x+y;
    roznica=x-y;
    iloczyn=x*y;
    iloraz=x/y;

    cout<<"Suma: "<<setprecision(2)<<suma<<endl;
    cout<<"Roznica: "<<setprecision(2)<<roznica<<endl;
    cout<<"Iloczyn: "<<setprecision(2)<<iloczyn<<endl;
    cout<<"Iloraz: "<<setprecision(2)<<iloraz<<endl;

    return 0;
}
