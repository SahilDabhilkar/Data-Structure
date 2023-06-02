//
//  graphic.c
//  College 
//
//  Created by Sahil Dabhilkar on 07/09/22.
//

#include <stdio.h>
int main()
{
    int array[100];
    int num=0;
    int i,j,temp=0;
    
    printf("Enter the Array size :");
    scanf("%d",&num);
    
    for (i=0; i<num; i++) {
        
        printf("Enter the Element %d :",i);
        scanf("%d",&array[i]);
    }
    for (i=0; i<num-1; i++) {
        for (j=0; j<num-i-1; j++) {
            if (array[j]>array[j+1]) {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for (i=0; i<num; i++) {
        printf("\n%d",array[i]);
    }
    return 0;
}

