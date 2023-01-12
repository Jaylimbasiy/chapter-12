#include<stdio.h>

struct student{
	
  int id;
  char name[20];
  int age;
  char course[20];
  char city[20];
  int std;
  char school[20];
};
void main(){
	
	struct student s1;
	
	
	printf("Enter id\t :");
	scanf("%d",&s1.id);
	printf("Enter name\t :");
	scanf("%s",&s1.name);
	printf("Enter age\t :");
	scanf("%d",&s1.age);
	printf("Enter course\t :");
	scanf("%s",&s1.course);
	printf("Enter city\t :");
	scanf("%s",&s1.city);
	printf("Enter std\t :");
	scanf("%d",&s1.std);
	printf("Enter scl\t :");
	scanf("%s",&s1.school);
	
}
