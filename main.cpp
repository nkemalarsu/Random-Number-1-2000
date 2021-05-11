//
//  main.cpp
//  0-2000 random
//
//  Created by N Kemal ARSU on 3.12.2020.
//
#include <iostream>
#include <clocale>

using namespace std;

void randomMaksSayi(){
int max = 2000, min = 0;
int maks=0;
int a[10];


srand(time(0));

for (int i = 0; i < 10; i++)
{
    a[i] = rand() % (max - min + 1) + min ;
    cout << a[i] << endl;
}
maks = a[0];

for (int j = 0; j < 10; j++)
{
    if (maks < a[j])
    {
        maks = a[j];
    }
}

cout << endl << "Ekrandaki 10 Sayının En Büyüğü: " << maks << "'dır" << endl << endl;

system("PAUSE");
}

int main()
{
    setlocale(LC_ALL, "TURKISH");
    randomMaksSayi();
        return 0;

}

