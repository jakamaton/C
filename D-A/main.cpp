//
//  main.cpp
//  DataAnalytiikka
//
//  Created by Niko Mast on 23.1.2020.
//  Copyright © 2020 Niko Mast. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace ::std;

double Normitus(double data, double kh, double ka){
    double norm = (data-ka)/kh;
    return norm;
}

double Luokittelu(double max, double min, int luokka){
    //Aineisto luokitellaan n luokkaan kaavalla (maksimi-minimi)/n
    
    
    return 0;
}

double KeskiArvo(double aineisto[], int n){
    double ka = 0;
    double temp = 0;
    for(int i = 0; i < n; i++){
        temp += aineisto[i];
    }
    ka = temp/n;
    return ka;
}

double KeskiLuku(double aineisto[], int n){
    double kl = 0;
    if(n/2==0){
        int median = n/2;
        double temp = aineisto[median];
        double temp2 = aineisto[median+1];
        kl = (temp + temp2)/2;
    }
    else{
      int kl = n/2;
        return kl;
    }
    return kl;
}

double Vaihtelu(double aineisto[], int n){
    double max = 0;
    double min = 999;
    double range;
    for (int i = 0; i < n; i++){
        if(aineisto[i]>max){
            max = aineisto[i];
        }
        if(aineisto[i]<min){
            min = aineisto[i];
        }
    }
    cout << "Luokitellaanko aineisto k/e";
    char input;
    cin >> input;
    if(input == 'k'){
        cout << "Kuinka moneen luokkaan aineisto luokitellaan";
        int luokka;
        cin >> luokka;
         Luokittelu(max, min, luokka);
    }
    range = max-min;
    return range;
}

double KeskiPoikkeama(double ka, double havainto){
    double poikkeama = havainto - ka;
    return poikkeama;
}

double KeskiHajonta(double aineisto[], int n){
    double kh[n];
    double ka  = KeskiArvo(aineisto, n);
    for(int i = 0; i < n; i++){
        kh[i] = (aineisto[i] - ka)*(aineisto[i] - ka);
    }
    ka = 0;
    for(int i = 0; i < n; i++){
        ka += kh[i];
    }
    double keskihajonta = sqrt(ka/(n-1));
    return keskihajonta;
    
}




int main(int argc, const char * argv[]) {
    double arr[] = {6,6,4,8,3,2,4,3,4,5,8,1,9,2,2,7,6};
    int n = 17;
    double ka = KeskiArvo(arr,n);
    double kl = KeskiLuku(arr, n);
    double kp = KeskiPoikkeama(ka, arr[8]);
    double kh = KeskiHajonta(arr, n);
    double varianssi = kh*kh;
    cout << "Aineiston keskiarvo: " << ka << "\n";
    cout << "Aineiston keskiluku: " << kl << "\n";
    cout << "Datapisteen" << " 8 arvo on: " << arr[8] << " ja arvon keskipoikkeama: " << kp << "\n";
    cout << "Aineiston keskihajonta: " << kh << "\n";
    cout << "Aineiston varianssi: " << varianssi << "\n";
    double dnorm[n];
    for(int i = 0; i < n; i++){
        dnorm[i] = Normitus(arr[i], kh, ka);
        //cout << "Datapiste " << i << " normitettuna: " << dnorm[i] << "\n";
    }
    double Nka = KeskiArvo(dnorm, n);
    cout << "Normitetun aineiston keskiarvo: " << Nka << "\n";
    return 0;
}
