#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
	int age;
	char role[20];
	char company_name[20];
	char city[20];
    int experience;
	
};
int main(){
  int n;
  printf("Enter Employee Number   :");
  scanf("%d",&n);	
  struct Employee emp[n];
  int i;
    for(i=0;i<n;i++){
    	printf("Enter Employee [%d] Id : ",i);
    	scanf("%d",&emp[i].id);
    	printf("\n");
    	printf("Enter Employee [%d] Name : ",i);
    	scanf("%s",emp[i].name);
    	printf("\n");
    	printf("Enter Employee [%d] role : ",i);
    	scanf("%s",emp[i].role);
    	printf("\n");
    	printf("Enter Employee [%d] experience : ",i);
    	scanf("%d",&emp[i].experience); 
    	printf("\n");
    	printf("Enter Employee [%d] Age : ",i);
    	scanf("%d",&emp[i].age);
    	printf("\n");
    	printf("Enter Employee [%d] City : ",i);
    	scanf("%s",emp[i].city);
    	printf("\n");
    	printf("Enter Employee [%d] company_name : ",i);
    	scanf("%s",emp[i].company_name);
    	printf("\n");
    	
	}
	 for(i=0;i<n;i++){
    printf("Employee [%d]..  \n",i+1);
    	printf("Id      :   %d",emp[i].id);
    printf("\n");
    	printf("Name    :   %s",emp[i].name);
    printf("\n");	
    	printf("role  :   %s",emp[i].role);
    printf("\n");	
    	printf("experience:   %d",emp[i].experience);  	
    printf("\n");
    	printf("Age     :   %d",emp[i].age);
    printf("\n");
	   	printf("company_name  :   %s",emp[i].company_name);
    printf("\n");	
    	printf("City    :   %s",emp[i].city);
    printf("\n\n");		
	}
	return 0;
}