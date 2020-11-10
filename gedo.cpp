include<iostream> 
#include<string> 
using namespace std; 
main() 
{	
	int UNID, cls, grade, sum;
	string firstname, surname, Dep, con;
	int i=0; 
	do {
		i=i+1;
		cout<<"Enter Your First Name:";ing cout<<cin>>firstnam;
		cout<<"Enter Your Sur Name:";cin>>surname;
		cout<<"Enter Your Department(T, A or C): ";cin>>Dep; 
		cout<<"Enter Your University ID: ";cin>>UNID;
		cout<<"Enter Your Class(A Number From 1 to 5): ";cin>>cls;
		//cout<<"Enter Your Grade: ";cin>>grade;
		while (i<=8)
				{
					cout<<"Enter Your Mark No.";cout<<i;cout<<" : ";cin>>grade; 
					sum=sum+grade; 
					i=i+1;
				}
		 	cout<<"--------------------------------\n";
		 	cout<<"- Your Name: "<<firstname<<" "<<surname<<"\n";
		 	cout<<"- Your University ID: "<<UNID;
		 	cout<<"\n- The Average is: "<<sum/8; 
		 	cout<<"\n- Your Ranking: ";
			if ((sum/8>=90)&&(sum/8<=100)) cout<<"A";
		 	else if ((sum/8>=80)&&(sum/8<=89)) cout<<"B";
		 	else if ((sum/8>=70)&&(sum/8<=79)) cout<<"C";
		 	else if ((sum/8>=60)&&(sum/8<=69)) cout<<"D";
		 	else if ((sum/8>=0)&&(sum/8<60)) cout<<"F";
		 	else cout<<"Open the program again and enter the right values";
		 	cout<<"\n- Your Department: ";   
		 	switch (cls) 
			{
				case 1:{cout<<"First Year";break;}
				case 2:{cout<<"Second Year";break;}
				case 3:{cout<<"Third Year";break;}
				case 4:{cout<<"Fourth Year";break;}
				case 5:{cout<<"Fifth Year";break;}
				default :{cout<<"";break;}
			}
			
		 	if(Dep=="T") cout<<" Communication ";
		 	else if(Dep=="A") cout<<" Control ";
		 	else if(Dep=="C") cout<<" Computer ";
			else cout<<"";
			
			cout<<"\n--------------------------------\n";
		 	cout<<"Enter Anything to Continue.\nEnter 'Exit' to Exit.\n";cin>>con;
		 	if (con=="Exit")
		 		break; 
 		}
	while (i<=10); 
}





