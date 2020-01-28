//
//  main.c
//  HelloWorld
//
//  Created by Niko Mast on 8.1.2020.
//  Copyright © 2020 Niko Mast. All rights reserved.
//

/* C implementation QuickSort */
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
// Funktio jossa vaihdetaan kahden elementin paikkaa
void Vaihto(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*Tassa funktiossa otetaan viimeinen elementti ja etsitaan sille
 oikea paikka lajitellussa taulukossa. Kaikki sita pienemmat arvot
 laitetaans sen vasemmalle puolelle ja isommat oikealle*/

int Ositus(int arr[], int pie, int iso)
{
    int pivot = arr[iso]; //vertailtava
    int i = (pie - 1); //pienimman vaihdettavan elementin indexi

    for (int j = pie; j <= iso- 1; j++)
    {
        // jos nykyinen elementti on pienempi kuin vaihdettava
        if (arr[j] < pivot)
        {
            i++; // se vaihdetaan talla indexilla olevaan elementtiin
            Vaihto(&arr[i], &arr[j]);
        }
    }
    //Lopuksi vaihdetaan laskurin mukaan seuraava ja alkuperainen vertailun kohde keskenaan
    Vaihto(&arr[i + 1], &arr[iso]);
    return (i + 1);
}

/* Quicksort funktio. */
void QuickSort(int arr[], int pie, int iso)
{
    if (pie< iso)
    {
        //pi on osituksen indexi
        int pi = Ositus(arr, pie, iso);

        // Erikseen jarjestetaan elementit
        // Ositus ja osituksen jalkeen
        QuickSort(arr, pie, pi - 1);
        QuickSort(arr, pi + 1, iso);
    }
}

//Tulostus funktio
void PrintArray(int arr[], int koko)
{
    int i;
    for (i=0; i < koko; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Kaynnistys
int main()
{
    int arr[1000];
    for(int i = 0;  i < 100; i++){
        arr[i]=rand() % 500;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, n-1);
    printf("Sorted array: ");
    PrintArray(arr, n);
}

