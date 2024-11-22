#ifndef SORT_H
#define SORT_H

#include<stdlib.h>
#include<stdio.h>


#define ARRAY_LEN(array)(sizeof(array)/sizeof(array[0]))

void swap(int* a,int* b){
    int aux= *a;
    *a=*b;
    *b=aux;
}


void print_array(int* array, int array_size){

    for(int i=0;i<array_size;i++){
        printf("|%d|",array[i]);
    }
}

void merge_sort(int* array, int array_size){}
void quick_sort(int index, int* array, int array_size){}

void bubble_sort(int* array, int array_size){

    for(int i=0;i<array_size; i++){
        for(int j=1; j<array_size-i;j++){
            if(array[j-1]>array[j])
                swap(&array[j-1],&array[j]);
        }
    }

}
void insertion_sort(int* array, int array_size){

    for(int i=1;i<array_size;i++){

        for(int j=i; j>0;j--){
            if(array[j]<array[j-1]){
                swap(&array[j],&array[j-1]);
            }
        }
    }
}
void selection_sort(int* array, int array_size){

    int lower_index;
    for(int i=0;i<array_size;i++){
        lower_index=i;

        for(int j=i+1; j<array_size;j++){
            if(array[lower_index]>array[j]){
                lower_index=j;
            }
        }
        swap(&array[i],&array[lower_index]);
    }
}

#endif