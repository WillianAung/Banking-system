#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
char ans,yes;
string name,name1;
int n,phno,pwd,pwd1,c=0,cash=0,add=0,wid=0,tranPh,tranAmt;
cout<<setw(60)<<"YOMA\n";
cout<<endl;
do{
cout<<"Main Menu\n\n";
cout<<"1.Create account\n";
cout<<"2.Login\n";
cout<<"\nEnter your choice:";
cin>>n;
cout<<endl;
switch (n)
{
case 1:{if(c==0){
		cout<<"Welcome!\n\n";
        cout<<"Enter your name:";
        getline(cin,name);
        getline(cin,name);
        cout<<"Enter phone number:";
        cin>>phno; 
        cout<<"Create password:";
        cin>>pwd;
        cout<<"\nAccount creation successful!\n";
        cout<<"Please go to main menu for login process!\n";
        c++;
}
	else if(c==1) cout<<"You already create a account!\n";	
    break;
} 
case 2:{if(c==1){
	int a=0;
    cout<<"Enter username:";
    getline(cin,name1);
    getline(cin,name1);
    while(a==0){
     if(name!=name1){
    	cout<<"Wrong username!\n";
    	cout<<"Enter name again:";
    	getline(cin,name1);
    	 }if(name==name1) a++;
   	
    }
    	int b=0;    
  		cout<<"Enter password:";
    	cin>>pwd1;
    	while(b==0){
		if(pwd!=pwd1){
			cout<<"Wrong password!\n";
			cout<<"Enter password again:";
			cin>>pwd1;
			}if(pwd==pwd1) b++;
	
 	  } 
    cout<<"\nLogin successful!\n";
    cout<<"\nYour main balance:"<<cash<<endl;
    do{
	cout<<"\nChoose your option\n\n";
	cout<<"1.Add\n";
	cout<<"2.Withdraw\n";
	cout<<"3.Transfer\n";
	cout<<"4.History\n";
	cout<<"5.Exit\n";
	cout<<"\nOption:";
	cin>>n;
switch(n){
	case 1:{
		cout<<"\nYour main balance:"<<cash<<endl;
		cout<<"\nEnter amount that you want to add:";
		cin>>add;
		cash+=add;
		cout<<"\nAdd amount:"<<add;
		cout<<"\nYour main balance:"<<cash<<endl;
		break;
	}
	case 2:{
		cout<<"\nYour main balance:"<<cash<<endl;
		cout<<"\nEnter amount that you want to withdraw:";
		cin>>wid;
		if(wid>cash) cout<<"Sorry! Your main balance is "<<cash<<endl;
		else {
			cash-=wid;
			cout<<"\nWithdraw amount:"<<wid<<endl;
		}
		cout<<"\nYour main balance:"<<cash<<endl;
		break;	
	}
	case 3:{
		int d=0;
		cout<<"\nTransfer to phone number:";
		cin>>tranPh;
		cout<<"Enter amount:";
		cin>>tranAmt;
		if(tranAmt>cash) {
			cout<<"\nSorry! Insufficient amount\n";
			cout<<"Your main balance is "<<cash<<endl;		
		}
		else {
			cash-=tranAmt;
			cout<<"\nTransfer amount:"<<tranAmt<<endl;
			d++;
		}
		if(d==1)cout<<"\nYour main balance:"<<cash<<endl;
		break;
	}
	case 4:{
		cout<<endl;
		cout<<setw(25)<<"---History---"<<endl<<endl;
		cout<<"MAIN BALANCE:	"<<cash<<endl;
		cout<<"ADD         "<<"WITHDRAW         "<<"TRANSFER"<<endl;
		cout<<add<<setw(12)<<wid<<setw(17)<<tranAmt<<endl;
		break;
	}
	case 5:{
		cout<<"\nAre your sure?\n y or n:";
		cin>>yes;
		cout<<"\nThank you!\n\n";
		goto exit;
		break;
	}
	default:cout<<"Invaild input!\n";
}
	cout<<"\nGo to option y or n:";
	cin>>ans;
	cout<<endl;
}
while(ans=='y');
cout<<"Thank you!\n\n";
    break;
}
else cout<<"Please create account first!\n";
break;}
default:cout<<"Invaild input!\n";   
}
cout<<"\nGo to main menu y or n:";
cin>>ans;
cout<<endl;
}
while(ans=='y');
exit:
return 0;
}