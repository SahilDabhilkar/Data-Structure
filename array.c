//
//  main.c
//  collage
//
//  Created by Sahil Dabhilkar on 24/08/22.
//

#include <stdio.h>
int a[10];
int i;
int size;
int pos;
int value;

int insertElement(void);
int viewElement(void);
int addElement(void);
int updateElement(void);
int deleteElement(void);
int smallest(void);


int main() {
    
    addElement();
   // insertElement();
  //  updateElement();
    viewElement();
    deleteElement();
    viewElement();
    smallest();
    
    return 0;
}


int insertElement()
{
        printf("Enter the position :");
        scanf("%d",&pos);
        printf("Enter the number :");
        scanf("%d",&value);
            a[pos-1]=value;
    return 0;
}


int viewElement()
{
    for (i=0; i<size; i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}


int addElement()
{
    printf("Enter the size :");
    scanf("%d",&size);
    for (i=0; i<size; i++) {
        printf("Enter the Element :");
        scanf("%d",&a[i]);
    }
    return 0;
}


int updateElement()
{
    printf("Enter the postion you want to update :");
    scanf("%d",&pos);
    printf("Enter the number :");
    scanf("%d",&value);
    a[pos-1]=value;
    return 0;
}


int deleteElement()
{
    printf("Enter the postion you want to delete :");
    scanf("%d",&pos);
    for (i=pos-1; i<size-1; i++) {
        a[i]=a[i+1];
    }
    size--;
    return 0;
}

int smallest()
{
    int small = a[0];
    for (i=0; i<size; i++) {
        if (a[i]>small) {
            small=a[i];
        }
    }
    printf("\nSmallest Number is :%d",small);
    return 0;
}
