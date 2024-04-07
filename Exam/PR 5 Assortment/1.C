#include<stdio.h>
main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int a[n];

    int i;

    for(i=0;i<n;i++){
         printf("Enter a[%d]: ",i);
         scanf("%d",&a[i]);
     }
      printf("Nagative elements from array : ");
    for(i=0;i<n;i++){
        if(a[i]<0){
          printf(" %d ,  ",a[i]);
            
        }
    }
}