#include<stdio.h>

//creating a structure named 'student_info' with 'name', 'roll', 'age' and 'marks' as its field names
struct student_info
{
	char name[50]; 
	char roll[50];
	int age;
	int marks;
};

int main()
{
	int n; //n stores the number of students
	scanf("%d", &n);
	struct student_info info[n]; //declaring structure variable

	//taking input of name, roll, age and marks of no. of students mentioned above 
	for(int i = 0; i < n; ++i)
		scanf("%s %s %d %d", info[i].name, info[i].roll, &info[i].age, &info[i].marks);

	//printing the inputs in the required format
	for(int i = 0; i < n; ++i)
		printf("%s\n%s\n%d\n%d\n", info[i].name, info[i].roll, info[i].age, info[i].marks);

	return 0;
}