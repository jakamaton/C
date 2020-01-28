//
//  main.cpp
//  PointerTest
//
//  Created by Niko Mast on 24.1.2020.
//  Copyright © 2020 Niko Mast. All rights reserved.
//

#include <iostream>
using namespace std;

string Stesti(string* sana){
    *sana = "abc";
    return *sana;
    }


int Itesti (int* muuttuja){
    for(int i = 0; i < 10; i++){
        *muuttuja += i;
        cout << *muuttuja << "\n";
                                }
    return *muuttuja;
        }


int Atesti(int* arr, int n){
    *arr = n;
    return *arr;
        }

int main(int argc, const char * argv[]) {
    //Muuttuja
    int x;
    //Osoittaja joka osoittaa muuttujan x arvoon & merkin avulla
    int* Ipointer = &x;
    x = 0;
    
    cout << "Osoittajassa oleva arvo: " << *Ipointer <<", osoittajan osoite: "<< Ipointer << ", muuttujan arvo:  " << x <<", osoittajaan annettu syote: " << &x << "\n";
    
    string y = "xyz";
    string* Spointer = &y;
    
    cout << "Osoittajassa oleva arvo: " << *Spointer <<", osoittajan osoite: "<< Spointer << ", muuttujan arvo:  " << y <<", osoittajaan annettu syote: " << &y << "\n";
    cout << "\n";
    cout << "Seuraavaksi kutsutaan metodia, jonka argumenttina on pointteri. Siihen syotetaan: " << *Spointer << ". \n";
    
    
    *Spointer = Stesti(&y);
    
    cout << "Metodi muuttaa pointterin arvoa ja palauttaa sen: " << *Spointer << ". \n";
    cout << "Nyt tehdaan sama mutta muuttujalle " << x << " sen arvoa muutetaan metodissa: \n";
    
    *Ipointer = Itesti(&x);
    
    cout << "Nyt muuttujan arvo on " << x <<"\n";
    
    int n = 10;
    int arr[10];
    int* Apointer = arr;
    
    cout << "\n";
    cout << "Array jossa on kymmenen paikkaa ja pointteri, joka osoittaa arrayhin (ei arrayn arvoon): \n";
    cout << "Arvo: " << *Apointer << " Osoite: "<< Apointer << "\n";
    cout << "koko arrayn osoiteavaruus: \n";
    
    for (int i = 0; i < n; i++){
        cout << "Paikka " << i << ": " << Apointer+i << "\n";
    }
    
    cout << "\n";
    
    for(int i = 5; i < n; i++){
        Atesti(Apointer+i, n);
    }
    
    cout << "Nyt arrayn pointteri+i laitetaan metodiin for loopin sisalla x kertaa ja metodissa asetataan arvo (n) pointteri+i kohtaan arrayta: " << "\n";
    
    for(int i = 0; i < n; i++){
        cout << "Edellisen jalkeen array nayttaa talta: " << arr[i] << " osoite: " << Apointer+i << "\n";
    }
    return 0;
}
