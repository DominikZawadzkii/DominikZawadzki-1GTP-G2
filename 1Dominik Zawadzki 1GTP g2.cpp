#include <iostream>
using namespace std;
		int tab[121];
		int a;
		int main()
{
							cout << "Wybierz Liczbe od 1-119:";
							cin>>a;
for(int i=0; i<121; i++)

tab[a]=100;
tab[a+1]=10;
tab[a-1]=10;
for( int i = 121; i >= 0; i--)
cout<<tab[i]<<endl;
return 0;
}
