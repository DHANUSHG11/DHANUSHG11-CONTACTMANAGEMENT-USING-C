#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 #define MAX_CONTACTS 100
 struct Contacts
  {
    char email[25];
   char name[50];
   char phone_number[15];
   
   }contact[MAX_CONTACTS];
    int num_contacts=0;
    
    int add_contact()
    { 
     if(num_contacts>=MAX_CONTACTS)
     {
      printf("\nTHE CONTACT LIST IS FULL");
      return 1;
    }
   else
   {  
     printf("NAME:");
     scanf("%15s",contact[num_contacts].name);
     printf("\nEMAIL:");
     scanf("%20s",contact[num_contacts].email);
    printf("\nPHONE NUMBER:");
    scanf("%15s",contact[num_contacts].phone_number);
     num_contacts++;
 printf("\nCONTACT ADDED SUCCESSFULLY.");

}
}
 int view_contact()
{
 if(num_contacts==0)
{
 printf("\nTHE CONTACT LIST IS EMPTY.");
}
else
{
 printf("\n\nTOTAL CONTACTS=%d",num_contacts);
 
 for(int i=0;i<num_contacts;i++)
{
 printf("\nContact %d:\n",i+1);
 printf("Name:%s\n",contact[i].name);
printf("Email:%s\n",contact[i].email);
printf("Phone Number:%s\n",contact[i].phone_number);


}
 }
}
      int main()
   {
    struct Contacts contact[MAX_CONTACTS];
    int i, choice;
    while(1)
{ printf("\tCONTACT MANAGEMENT SYSTEM\n");
 printf("\nENTER YOUR CHOICE\n");
printf("CHOOSE 1 FOR ADDING NEW CONTACT\n");
printf("CHOOSE 2 FOR VIEWING CONTACT\n");
printf("CHOOSE 3 FOR EXITING THE  CONTACT MANAGEMENT\n");
scanf("%d",&choice);
 switch(choice)
 {
  case 1:add_contact();
  break;
  case 2:view_contact();
  break;
  case 3:printf("\t\t\tTHANKYOU\n\t\tEXITED FROM CONTACT MANAGEMENT SYSTEM");
       
return 0;
break;

  default :printf("Invalid choice\n");
  break;
  }
  }
 
return 0;
}
