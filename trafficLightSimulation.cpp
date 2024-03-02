#include<iostream>
#include<conio.h>
#include<unistd.h>
using namespace std;
class Cqueue
{
	private:
		int arr[3];
		int front;
	public:
		Cqueue()
		{
			front=2;
			arr[0]=1;
			arr[1]=2;
			arr[2]=3;
		}
		int enque();
};
int Cqueue::enque()
{
	int c;
	front=(front+1)%3;
	return(arr[front]);
};
void design(int n)
{
	switch(n){
		case 1:
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t      |  RED   |";
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t          ||";
			break;
		case 2:
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t      | YELLOW |";
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t          ||";
			break;
		case 3:
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t      | GREEN  |";
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t          ||";
			break;
		case 4:
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t      |        |";
			cout<<"\n\t\t\t\t       --------";
			cout<<"\n\t\t\t\t          ||";
			break;
		case 5:
			cout<<"\n\t\t\t\t          ||";
			break;
	}

}
void display()
{
	Cqueue q;
	int n,ch;
	do{
		system("cls");
		cout<<"\n\t\t\t==================================\n";
		cout<<"\n\t\t\t              TRAFIC\n";
		cout<<"\n\t\t\t            SIMMULATION\n";
		cout<<"\n\t\t\t==================================\n";
		n=q.enque();
		switch(n){
			case 1:
				design(1);
				design(4);
				design(4);
				design(5);
				cout<<"\n\n\t\t\t\t   ******STOP******";
				break;
			case 2:
				design(4);
				design(2);
				design(4);
				design(5);
				cout<<"\n\n\t\t\t\t   ******WAIT******";
				break;
			case 3:
				design(4);
				design(4);
				design(3);
				design(5);
				cout<<"\n\n\t\t\t\t   ******GO******";
				break;
		}
		cout<<"\n\n\n\t\t   PRESS ANY TO CONTINUE...(for exit press esc)\n";
		ch=getch();
	}
	while(ch!=27);
		
}
int main()
{
	display();
}
