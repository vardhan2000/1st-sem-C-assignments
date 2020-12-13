#include<stdio.h>
#include<stdlib.h>

//creating a structure named 'node' with 'num' and pointer 'next' as its fields.
struct node
{
	int num;
	struct node *next;
};

//declaring a global variable 'head' with datatype struct node
struct node *head;

//defining a function to insert a node at nth position of a linked list
void insert(int x, int pos) //x is the no. to be inserted and 'pos' is the position at which it is to be inserted 
{
	//dynamically allocating memory for nodes temp1 and temp2
	struct node *temp1 = (struct node *)malloc(sizeof(struct node)); 
	struct node *temp2 = (struct node *)malloc(sizeof(struct node));

	//making the node temp1 which is to be appended
	temp1 -> num = x;
	temp1 -> next = NULL;

	//linking head to temp1 if pos = 1
	if(pos == 1)
	{
		temp1 -> next = head;//pointing 'next' to whichever address head is pointing to
		head = temp1;//storing the address of temp1 in head 
	}

	//linking temp1 to temp2(the node previous to temp1) if pos is not equal to 1
	else
	{
		struct node *temp2 = head; //initializing temp2 

		//reaching the currently last node in the liked list
		for(int i = 1; i < pos - 1; ++i)
			temp2 = temp2 -> next;

		//linking temp1 to temp2 and making temp1 the last node
		temp1 -> next = temp2 -> next;
		temp2 -> next = temp1;
	}
}



int main()
{
	head = NULL;//initializing 'head'

	int n, x;//n stores the no. of numbers tobe taken as input while x stores each number to be linked
	scanf("%d", &n);//taking 'n' as input


	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &x);//taking each number to be linked as input
		insert(x, i + 1);//putting each of them in a node, linking the nodes and making a linked list 
	}

	//dynamically allocating memory for 'temp1', 'temp2', 'temp3'
	struct node *temp1 = (struct node *)malloc(sizeof(struct node));
	struct node *temp2 = (struct node *)malloc(sizeof(struct node));	
	struct node *temp3 = (struct node *)malloc(sizeof(struct node));

	temp1 = head; //initializing temp1

	//loop to print the linked list
	while(temp1 != NULL)
	{
		printf("%d-->", temp1 -> num);
		temp1 = temp1 -> next;//updating temp1
	}

	printf("NULL\n");

	/*the codes written below are for deleting the nodes with odd values and printing the new linked list*/

	temp1 = head; temp2 = head; //initializing 'temp1' and 'temp2'. 
	
	//loop to delete the nodes with odd values
	//'temp1' is to traverse through the linked list 
	//'temp2' always represents the node just previous to the node pointed by 'temp1'
	while(temp1 != NULL)
	{
		if((temp1 -> num) % 2 != 0)	
		{
			if(head == temp1)//if the first node has odd value
			{
				temp3 = temp1;//'temp3' represents the node currently pointed by 'temp1'
				temp1 = temp1 -> next;//pointing temp1 to the node next to the current node
				
				head = temp1;//breaking the link b/w the node initially pointed by 'temp1' 
							 //and linking 'head' to the node currently pointed by 'temp1'  
				
				free(temp3);//freeing the node with odd value
			}

			else//if the node somewhere in the middle has odd value
			{
					temp3 = temp1;//'temp3' represents the node currently pointed by 'temp1'
					temp1 = temp1 -> next;//pointing temp1 to the node next to the current node
					temp2 -> next = temp1;//breaking the link b/w the node initially pointed by 'temp1' 
							              //and linking 'temp2' to the node currently pointed by 'temp1'
					
					free(temp3);//freeing the node with odd value
			}
		}

		else//if the node does not have an odd value 
		{
			temp2 = temp1;//'temp2' points to the address that 'temp1' is pointing to   
			temp1 = temp1 -> next;//pointing temp1 to the node next to the node that it is currently pointing
		}
	}

	//printing the new linked
	temp1 = head;
	while(temp1 != NULL)
	{
		printf("%d-->", temp1 -> num);
		temp1 = temp1 -> next;
	}

	printf("NULL ");
	return 0;

}	