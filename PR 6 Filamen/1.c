#include<stdio.h>

main()
{
    char name[20] , rev[20];

    printf("Enter any String: ");
    scanf("%[^\n]",&name);

    int i ,len=0 ,n=0;

   
    for(i=0;name[i]!='\0';i++){
        len++;
    }
     for(i=0;i<len;i++)
    {
       if(name[i]>=65 && name[i]<=90){
        name[i]=name[i]+32;
       }
    }
    // printf("Name\t : %s\n",name);
    for(i=len-1;i>=0;i--,n++)
    {
        rev[n]=name[i];
        //  printf("%c\n",rev[n]);
    }
    int pal=0;
    for(i=0;i<len;i++)
    {
        if(name[i]==rev[i])
        {
            pal=1;
        }
        else{
            pal=0;
            break;
        }
    }
  
         (pal==1)
           ? printf("This String is Palindrome")
           : printf("This String is not Palindrome");

    // if(pal==1)
    // {
    //     printf("\nThis String is Palindrome");
    // }
    // else
    // {
    //     printf("This String is not Palindrome");
    // }
    
   
}