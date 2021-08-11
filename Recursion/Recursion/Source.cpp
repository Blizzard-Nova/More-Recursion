
/////////////////////////////////////////////////////RECURSION (FACTORIAL CODE)/////////////////////////////////////////////////////////////////

/*#include <iostream>
using namespace std;
int Factorial(int x)
{
	if (x > 1)
	{
		return x * Factorial(x - 1);
	}
	else
		return 1;
}
int main()
{
	int n, result;
	cout << "Enter a non-negative number \n";
	cin >> n;
	
	cout << Factorial(n) << endl;

	return 0;
}*/


/////////////////////////////////////////////////////RECURSION(BASE AND POWER)/////////////////////////////////////////////////////////////////
                                          

/*#include <iostream>
using namespace std;
int Calculate_Power(int base, int power)
{
	if (power != 0)
	{
		return base *( Calculate_Power(base, power - 1));
	}
	else
		return 1;
}
int main()                           //////Basic FACTORIAL without recursion//////
{
	/*int x;
	int product = 1;
	cout << "Enter a non negative intiger \n";
	cin >> x;
	if (x <= 0)
	{
		cout << product << endl;

	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			product *= i;


		}
		cout << "Factorial is " << product << endl;
	}*/
	/*int result;
	int x, n;
	cout << "Enter the base number \n";
	cin >> x;
	cout << "Enter power number (positive number ) \n";
	cin >> n;
	result = Calculate_Power(x, n);
	cout << "The result of " << x << "  ^ " << n << "  is " << result << endl;
	return 0;
}*/


/////////////////////////////////////////////////////RECURSION(Linked list)/////////////////////////////////////////////////////////////////

/*#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};

    node* New_Node()
	{
	node* temp = new node;
			temp->data = x;
			temp->next = NULL;
			return temp;
			}

	node* insertion(node* head, int x)
	{
		if (head == NULL)
		{
			New_Node();
		}
		else
			 head->next = insertion(head->next,x);
		return head;

	}
	void Triverse(node* head )
	{
		
		if (head == NULL)
		{
			return;
		}
		else
		{
			cout << head->data << endl;
			Triverse(head->next);
			
		}
	}
	int LengthOfList(node* head)
	{
		int length = 0;
		if (head == NULL)
		{
			return 0;
		}
		else
			return 1 + LengthOfList(head->next);

	}

	void Display()
	{
		node* head = NULL;
		cout << "Linked list \n";
		head = insertion(head, 10);
		head = insertion(head, 20);
		head = insertion(head, 30);
		head = insertion(head, 40);
		head = insertion(head, 50);

		 Triverse(head);
		 cout << endl;
		 cout << endl;
		 cout << "Length \n";
		 cout << LengthOfList(head) << endl;
	}

int main()
{
	Display();

	return 0;

}*/

#include <iostream>
using namespace std;
void PrintStringBackwards(char* str)
{
	if (*str == '\0')
	{
		return;
	}
	else
		PrintStringBackwards(str + 1);
	//This will make the entire string opposite (backwards) word by word
	//cout << str << endl;
	//PrintStringBackwards(str + 1);
	//This will again reverse the backwards string but will make the sentence go reverse
	cout << *str;

}
int main()
{
	char string[] = "I love tech \n";
	PrintStringBackwards(string);

	return 0;
}
