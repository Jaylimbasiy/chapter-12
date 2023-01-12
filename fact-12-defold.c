#include<stdio.h>

struct emp{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	float experience;
	char companyname[20];
};

 main(){

    struct emp e1;
    
    printf("Enter id\t : ");
    scanf("%d",&e1.id);
    printf("Enter name\t : ");
    scanf("%s",&e1.name);
    printf("Enter age\t : ");
    scanf("%d",&e1.age);
    printf("Enter role\t : ");
    scanf("%s",&e1.role);
    printf("Enter city\t : ");
    scanf("%s",&e1.city);
    printf("Enter exp\t : ");
    scanf("%f",&e1.experience);
    printf("Enter com\t : ");
    scanf("%s",&e1.companyname);
}
