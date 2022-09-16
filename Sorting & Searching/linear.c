//
//  linear.c
//  collage
//
//  Created by Sahil Dabhilkar on 10/09/22.
//

#include <stdio.h>
int main()
{
    int array[]={23,56,78,45,34,67,45,778,123,12};
    int num;
    int i;
    int length;
    int a=-1;
    
    length = sizeof(array)/sizeof(array[0]);
    printf("Enter the element you want to find :");
    scanf("%d",&num);
    for (i=0; i<length; i++) {
        if (array[i]==num) {
            a=i;
            printf("\nMatch is found %d postition\n",i);
            break;
        }
        
    }
    if (a==-1) {
        printf("Match Not found.\n");
    }
}


