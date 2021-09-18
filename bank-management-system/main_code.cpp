#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
long am=0,an=0;
class Acc              //class named 'acc'
{
    private:

        char name[20];              //declaring a variable 'name' of type char for taking NAME from the user 
        int  age;                   //declaring a variable 'age' of type integer for taking AGE from the user 
        char atype;                 //declaring a char variable 'atype' of type char for taking A/C TYPE from the user 
        long  abal;                 //declaring a variable 'abal' of type long for taking AMOUNT from the user 
        char phno[11];              //declaring an array 'phno' of type char for taking phone number from the user 
        char addr[20];              //declaring an array 'addr' of type char for taking address from the user 
        long  loan=0;               //declaring a variable 'loan' of type long for taking LOAN AMOUNT from the user 
        long min_save=500;          //declaring a variable 'min_save' of type long for specifying minimum amount in savings account from the user 
        long min_curr=1000;         //declaring a variable 'min_curr' of type long for specifying minimum amount in current account from the user 
        

    public:

	    int  ano;                 //declaring a variable 'ano' of type integer


void create()
{
	
        cout<<"\n\tENTER THE NAME OF ACCOUNT HOLDER : ";
            cin>>name;                        // 'name' is here  taking name from the user
            cout<<endl;
        cout<<"\tENTER THE AGE OF ACCOUNT HOLDER : ";
            cin>>age;                            // 'age' is here  taking age from the user
            cout<<endl;
        cout<<"\tENTER THE ADDRESS OF ACCOUNT HOLDER : ";
            cin>>addr;                            // 'address' is here  taking address from the user
            cout<<endl;
        cout<<"\tENTER VALID Ph. No. OF ACC. HOLDER(should be of 10 digits) : ";
            cin>>phno;                            // 'phno' is here  taking phone number from the user
	while(strlen(phno)!=10)
	{
	    cout<<"\tRE-ENTER A VALID Ph. No.(having 10 digits) : ";
	    cin>>phno;                            // 'phno' is here  taking phone number from the user
	}
	        cout<<endl;
	    cout<<"\tENTER THE TYPE OF ACCOUNT (C/S) : ";
	        cin>>atype;                       // 'rec.atype' is here  taking A/C type from the user
	switch(atype)
	{
        case 's' : break;
        case 'c' : break;
        case 'S' : break;
        case 'C' : break;
        	default : cout<<"\tRE-ENTER THE VALID ACCOUNT TYPE (C/S) : ";
		        		 cin>>atype;               // 'rec.atype' is here  taking A/C type from the user
	}
	        cout<<endl;
	    cout<<"\tINITIAL AMOUNT NECESSARY FOR OPENING SAVING ACC. - "<<min_save<<endl;
	    cout<<"\tINITIAL AMOUNT NECESSARY FOR OPENING CURRENT ACC. - "<<min_curr<<endl;
	    cout<<"\n\tENTER THE AMOUNT : ";
	        cin>>abal;                    // 'rec.abal' is here  taking initial amount from the user
	switch(atype)              //switch case to compare account type(saving /current)
	{
            case 'S' : while(abal<min_save)             //if account type entered is saving then amount must be greater than or equal to min_save 
                        {
                            cout<<"\tRE-ENTER THE INITIAL NECESSARY AMOUNT : ";
                            cin>>abal;            //if amount entered is less than min_save then to re-enter amount 
                        }break;

            case 's' : while(abal<min_save)             //if account type entered is saving then amount must be greater than or equal to min_save 
                        {
                            cout<<"\tRE-ENTER THE INITIAL NECESSARY AMOUNT : ";
                            cin>>abal;            //if amount entered is less than min_save then to re-enter amount 
                        }break;

            case 'C' : while(abal<min_curr)           //if account type entered is saving then amount must be greater than or equal to min_curr 
                        {
                            cout<<"\tRE-ENTER THE INITIAL NECESSARY AMOUNT : ";
                            cin>>abal;                 //if amount entered is less than min_curr then to re-enter amount 
                        }break;

            case 'c' : while(abal<min_curr)           //if account type entered is saving then amount must be greater than or equal to min_curr 
                        {
                            cout<<"\tRE-ENTER THE INITIAL NECESSARY AMOUNT : ";
                            cin>>abal;                 //if amount entered is less than min_curr then to re-enter amount 
                        }break;
	}
}
void depo()
{
	cout<<"\n\t CURRENT BALANCE : "<<abal;
	cout<<"\n\n\t ENTER THE AMOUNT TO BE DEPOSIT : ";
	cin>>am;                 //am is here taking the amount to be deposit
}
void update1()
{
	//displaying the updated information of matching account no.
	cout<<"\n\t A/C NO. : "<<ano;
	cout<<"\n\t NAME : ";
	puts(name);
	cout<<"\t AGE : "<<age;
	cout<<"\n\t A/C TYPE : "<<atype;
	cout<<"\n\t YOUR NEW BALANCE : ";
	abal+=am;                    //adding the depositing amount to current amount
	cout<<abal;
}
void with()
{
	cout<<"\n\t CURRENT BALANCE : "<<abal;
	cout<<"\n\n\t ENTER THE AMOUNT TO BE WITHDRAW : ";
	cin>>an;
	long bal=0;
	bal=abal-an;
	switch(atype)
	{                 //'am' is the A/C no. from which amount is to be withdrawn
            case 's' : if(bal<min_save)
                        {
                            cout<<"\n\n  TO CONTINUE YOUR ACC. YOU CAN'T WITHDRAW BEFORE THE MINIMUM AMOUNT LIMIT";
                            cout<<"\n\n\tA SAVING ACCOUNT SHOULD ALWAYS HAVE MINIMUM "<<min_save<<" RUPEES";
                            cout<<"\n\n\t RE-ENTER VALID AMOUNT TO WITHDRAW : ";
                                cin>>an;
                        }
                break;
            case 'S' : if(bal<min_save)
                        {
                            cout<<"\n\n  TO CONTINUE YOUR ACC. YOU CAN'T WITHDRAW BEFORE THE MINIMUM AMOUNT LIMIT";
                            cout<<"\n\n\tA SAVING ACCOUNT SHOULD ALWAYS HAVE MINIMUM "<<min_save<<" RUPEES";
                            cout<<"\n\n\t RE-ENTER VALID AMOUNT TO WITHDRAW : ";
                                cin>>an;
                        }
                break;
            case 'c' : if(bal<min_curr)
                        {
                            cout<<"\n\n  TO CONTINUE YOUR ACC. YOU CAN'T WITHDRAW BEFORE THE MINIMUM AMOUNT LIMIT";
                            cout<<"\n\n\tA CURRENT ACCOUNT SHOULD ALWAYS HAVE MINIMUM "<<min_curr<<" RUPEES";
                            cout<<"\n\n\t RE-ENTER VALID AMOUNT TO WITHDRAW : ";
                                cin>>an;
                        }
                 break;
            case 'C' : if(bal<min_curr)
                        {
                            cout<<"\n\nTO CONTINUE YOUR ACC. YOU CAN'T WITHDRAW BEFORE THE MINIMUM AMOUNT LIMIT";
                            cout<<"\n\n\tA CURRENT ACCOUNT SHOULD ALWAYS HAVE MINIMUM "<< min_curr <<" RUPEES";
                            cout<<"\n\n\t RE-ENTER VALID AMOUNT TO WITHDRAW : ";
                                cin>>an;
                        }
                break;
    }
}
void update2()
{
    //displaying the updated information of matching account no.
	cout<<"\n\t A/C NO. : "<<ano;
	cout<<"\n\t NAME : ";
	puts(name);
	cout<<"\t AGE : "<<age;
	cout<<"\n\t A/C TYPE : "<<atype;
	cout<<"\n\t YOUR NEW BALANCE : ";
	abal-=an;                    //decreasing the withdrawing amount from current amount
	cout<<abal;
}
void AccDetails()
{
    //displaying information of the matching account no.
	cout<<"\n\t A/C.no : "<<ano;
	cout<<"\n\t NAME : ";
	puts(name);
	cout<<"\t AGE : "<<age;
	cout<<"\n\t ADDRESS : ";
	puts(addr);
	cout<<"\t PHONE No. : ";
	puts(phno);
	cout<<"\t A/C TYPE : "<<atype;
	cout<<"\n\t BALANCE : "<<abal;
}
void bal()
{
    //displaying BALANCE of the matching account no.
	cout<<"\n\t A/C.no : "<<ano;
	cout<<"\n\t NAME : "<<name;
	cout<<"\n\t BALANCE : "<<abal;
}
void allacc()
{
	cout<<"    "<<ano<<"\t       "<<name<<"\t   "<<age<<"\t    "<<atype<<"\t           "<<abal<<endl;
}
void mod()
{
    //displaying all information of the matching account no.
	cout<<"\n  PRESENT DETAILS : "<<endl;
	cout<<"\n\t A/C NO. : "<<ano;
	cout<<"\n\t NAME : ";
	puts(name);
	cout<<"\t AGE : "<<age;
	cout<<"\n\t ADDRESS : ";
	puts(addr);
	cout<<"\t PHONE No. : ";
	puts(phno);
	cout<<"\t A/C TYPE : "<<atype;
	cout<<"\n\t A/C BALANCE : "<<abal;
}
void  loanAcc()
{
    //displaying information of the matching account no.
	cout<<"\n\t A/C.no : "<<ano;
	cout<<"\n\t NAME : ";
	puts(name);
	cout<<"\t AGE : "<<age;
	cout<<"\n\t ADDRESS : ";
	puts(addr);
	cout<<"\t PHONE No. : ";
	puts(phno);
	cout<<"\n\t LOAN : "<<loan;
}
void  allLOAN()
{
    if(loan>0)
    {
        cout<<"    "<<ano<<"\t       "<<name<<"\t   "<<age<<"\t    "<<atype<<"\t           "<<loan<<endl;
    }
}
void  ldepo()
{
	    cout<<"\n\t CURRENT LOAN : "<<loan<<endl<<endl;
}
void lon1()
{
    long l;
        cout<<"NAME : ";
        puts(name);
        cout<<"AGE : "<<age<<endl;
        cout<<"Address : ";
        puts(addr);
        cout<<"Phone No. : ";
        puts(phno);
        cout<<"Account Type : "<<atype<<endl;
        cout<<"\n Enter the Amount of LOAN : ";
            cin>>l;
    loan+=l;
        cout<<"\n TOTAL LOAN : "<<loan;
}
void  lon2()
{
    long l;
        cout<<"NAME : ";
        puts(name);
        cout<<"AGE : "<<age<<endl;
        cout<<"Address : ";
        puts(addr);
        cout<<"Phone No. : ";
        puts(phno);
        cout<<"Account Type : "<<atype;
        cout<<endl;
        cout<<"\n Enter the LOAN Amount to be Deposit : ";
            cin>>l;
    loan=loan-l;
        cout<<"\n Remaining LOAN : "<<loan;
}
int Ano()
{
    return ano;
}
long amount()
{
    return abal;
}
char actype()
{
    return atype;
}
long savings_min()
{
    return min_save;
}
long current_min()
{
    return min_curr;
}
};

void NEW_ACCOUNT()              //a function to create a new a/c
{
    fstream fl;
    Acc rec;                  //declaring an object of fstream with 'fl'
    int no;
    fl.open("success.dat",ios::in|ios::binary);
    while(fl.read((char*)&rec,sizeof(rec))); //a inbuilt function for a new screen
         
         cout<<"\t\t     ++++++NEW ACCOUNT ENTRY FORM+++++++";
         cout<<endl<<endl<<endl;
         cout<<"\tENTER YOUR ACCOUNT NO. : ";
            cin>>no;

    while(no==rec.ano)
    {
        cout<<"\n\tACCOUNT NO. ALREADY EXIST";
        cout<<"\n\tRE-ENTER A UNIQUE ACCOUNT NO. : ";
            cin>>no;
    }

    fl.close();
    fl.open("success.dat",ios::in|ios::app|ios::binary);       //opening file with an external file name  without deleting the previous accounts 
    rec.ano=no;
    rec.create();
        cout<<endl<<endl;
        cout<<"YOUR ACCOUNT HAS BEEN CREATED SUCCESSFULLY...";
    fl.write((char*)&rec,sizeof(rec));                          //to write the above information in file named "success.dat"
    fl.close();                                                 //closing the file named "success.dat"
        getch();
                    //a inbuilt function for a new screen
}

void  DEPOSIT_AMOUNT()             //a function to daposit amount
{
    Acc rec;
    fstream  fl; ;                  //declaring an object of fstream with 'fl'
    int n,pos=-1;                   //a inbuilt function for a new screen
        cout<<"\t\t\t  ***AMOUNT DEPOSITING FORM***";
        cout<<endl<<endl<<endl;
        cout<<"\t ENTER YOUR A/C NO. : ";
            cin>>n;                  //'n' is the A/C no. in which amount is to be deposit
    fl.open("success.dat",ios::in|ios::out|ios::binary);          //opening file with an external file name modes for reading and writing record  
    fl.read((char*)&rec,sizeof(rec));          //to read the records from file
    while(!fl.eof())                   //while(!fl.eof())
    {
        if(rec.Ano()==n)
        {
            rec.depo();
            pos=fl.tellg()-sizeof(rec);          //'pos' is now contain the position where the current record begins(matching)
                break;
        }
        fl.read((char*)&rec,sizeof(rec));               //to read record from file
    }
        if(pos>-1)
        {
            rec.update1();
            fl.seekp(pos,ios::beg);                   //'seekp' has been used to put the write pointer of file at the location mentioned by pos which is in the beginning of the record in which amount is to be update 
            fl.write((char*)&rec,sizeof(rec));              //to write the updated  record in file
                cout<<"\n\n\t THE AMOUNT HAS BEEN DEPOSITED SUCCESSFULLY";
        }
        else
             cout<<"\n\t A/C NOT EXIST";
    fl.close();              //closing the file named "success.dat"
        getch();
                        //a inbuilt function for a new screen
}
void WITHDRAW_AMOUNT()     //a function to withdraw amount
{
    Acc rec;                //declaring 'rec' as a structure variable
    fstream  fl; ;                  //declaring an object of fstream with 'fl'
    int n,pos=-1;                   //declaring 'Q', 'am', 'pos'(with value -1) as a integer  variable
        cout<<"\t\t\t  ***AMOUNT WITHDRAWING FORM***";
        cout<<endl<<endl<<endl;
        cout<<"\t ENTER YOUR A/C NO. : ";
             cin>>n;                     //n is the A/C no. from  which amount is to be withdraw
    fl.open("success.dat",ios::in|ios::out|ios::binary);                        //opening file with an external file name modes for reading and writing record  
    fl.read((char*)&rec,sizeof(rec));           //to read record from fie
    while(fl)                   //while(!fl.eof())
    {
        if(rec.Ano()==n)
        {
             rec.with();
            pos=fl.tellg()-sizeof(rec);          //'pos' is now contain the position where the current record begins(matching)
             break;
        }
        fl.read((char*)&rec,sizeof(rec));                      //to read record from file
    }
        if(pos>-1)
        {
                rec.update2();
            fl.seekp(pos,ios::beg);              //'seekp' has been used to put the write pointer of file at the location mentioned by pos which is in the beginning of the record in which amount is to be update 
            fl.write((char*)&rec,sizeof(rec));         //to write the updated  record in file
                cout<<"\n\n\t THE AMOUNT HAS BEEN WITHDRAWN SUCCESSFULLY";
        }
        else
                 cout<<"\n\t A/C NOT EXIST";
    fl.close();              //closing the file named "success.dat"
        getch();
  
}
void  BALANCE_ENQUIRY()     //to enquire the balance of a particular a/c
{
    fstream fl;
    Acc rec;                  //declaring an object of fstream with 'fl' //a inbuilt function for a new screen
    int n=0,found=0;           //declaring 'n' and 'found' as integer variable initiating with value '0'
        cout<<"\t\t\t  ***BALANCE ENQUIRY***";
        cout<<endl<<endl<<endl;
        cout<<"\t ENTER THE A/C NO. OF PERSON WHOM BALANCE TO BE ENQUIRED  : ";
            cin>>n;              //n is here taking the A/C no. of the person whom balance to be enquire
    fl.open("success.dat",ios::in|ios::binary);               //opening file with an external file name "success.dat" in (read)in mode for reading  record  
    fl.read((char*)&rec,sizeof(rec));                      //to read record from file
    while(fl)                   //while(!fl.eof())
    {
        if(rec.Ano()==n)
        {
            char type;
            type=rec.actype();
            rec.bal();
            switch(type)
            {
                case 's' : if(rec.amount()<rec.savings_min()*2)
                {
                        cout<<"\n\n\t\t\t WARNING....!!!!!";
                        cout<<"\n\n\tYOUR ACCOUNT IS CLOSE TO THE MINIMUM AMOUNT LIMIT..!";
                        cout<<"\n\n\tPLEASE DEPOSIT AMOUNT";
                }
                    break;
                case 'S' : if(rec.amount()<rec.savings_min()*2)
                {
                        cout<<"\n\n\t\t\t WARNING....!!!!!";
                        cout<<"\n\n\tYOUR ACCOUNT IS CLOSE TO THE MINIMUM AMOUNT LIMIT..!";
                        cout<<"\n\n\tPLEASE DEPOSIT AMOUNT";
                }
                    break;
                case 'c' : if(rec.amount()<rec.current_min()*2)
                {
                        cout<<"\n\n\t\t\t WARNING....!!!!!";
                        cout<<"\n\n\tYOUR ACCOUNT IS CLOSE TO THE MINIMUM AMOUNT LIMIT..!";
                        cout<<"\n\n\tPLEASE DEPOSIT AMOUNT";
                }
                    break;
                case 'C' : if(rec.amount()<rec.current_min()*2)
                {
                        cout<<"\n\n\t\t\t WARNING....!!!!!";
                        cout<<"\n\n\tYOUR ACCOUNT IS CLOSE TO THE MINIMUM AMOUNT LIMIT..!";
                        cout<<"\n\n\tPLEASE DEPOSIT AMOUNT";
                }
                    break;
            }
            found=1;                 //if A/C no. matched with the existing A/C no.'s value of found is changed
        }
        fl.read((char*)&rec,sizeof(rec));             //to read record from file
    }
     if(found==0)              //if value of found is not changed above means A/C does not exist
        cout<<"\nInvalid A/C No.";
    fl.close();              //closing the file named "success.dat"
        getch();
                    //a inbuilt function for new screen
}

void ALL_ACCOUNT_HOLDERS()    //to see the list of all a/c holders
{
    Acc rec;
    fstream fl;                  //declaring an object of fstream with 'fl'
    fl.open("success.dat",ios::in|ios::binary);                    //opening file with an external file name "success.dat" in (read)in mode for reading  records 
    fl.read((char*)&rec,sizeof(rec));          //to read records from file //a inbuilt function for new screen
        cout<<"\t\t      ALL ACCOUNT HOLDERS LIST";
        cout<<"\n\t\t     --------------------------";
        cout<<endl<<endl<<endl;
        cout<<"****************************************************************"<<endl;
        cout<<"    A/C NO.\t NAME\t   AGE\t  A/C TYPE\t  BALANCE"<<endl;
        cout<<"****************************************************************"<<endl;
    while(fl)                   //to display all the accounts by end of file
    {
        rec.allacc();
        fl.read((char*)&rec,sizeof(rec));                   //to read records from file
    }
    fl.close();              //closing the file named "success.dat"
         getch();   //a inbuilt function for new screen
}

void  MODIFY_ACCOUNT()           //a function to modify account
{
    fstream fl;
    Acc rec;                  //declaring an object of fstream with 'fl'
    int n,pos=-1;             //declaring 'Q', 'am', 'pos'(with value -1) as a integer  variable
        cout<<"\t\t\t  ***ACCOUNT MODIFICATION FORM***";
        cout<<endl<<endl<<endl;
        cout<<"\t ENTER THE A/C NO. WHICH IS TO BE MODIFIED : ";
            cin>>n;                     //'n' is here taking the A/C no. of the person whom balance to be enquire
    fl.open("success.dat",ios::in|ios::out|ios::binary);                         //opening file with an external file name modes for reading and writing record  
    fl.read((char*)&rec,sizeof(rec));                        //to read record from file
    while(!fl.eof())                   //while(!fl.eof())
    {
        if(rec.Ano()==n)
        {
            rec.mod();
            pos=fl.tellg()-sizeof(rec);                       //'pos' is now contain the position where the current record begins(matching)
                break;
        }
        fl.read((char*)&rec,sizeof(rec));                 //to read record from file
    }
        if(pos>-1)
        {
            cout<<endl<<endl;
            cout<<"  ENTER NEW ACCOUNT DETAILS"<<endl;
            cout<<endl;
            rec.create();
            fl.seekp(pos,ios::beg);            //'seekp' has been used to put the write pointer of file at the location mentioned by 'pos' which is in the beginning of the record in which amount is to be update 
            fl.write((char*)&rec,sizeof(rec));             //to write the updated  record in file
            cout<<"\n\n\t THE ACCOUNT HAS BEEN MODIFIED SUCCESSFULLY";
        }
        else
            cout<<"\n\t A/C NOT EXIST";
    fl.close();              //closing the file named "success.dat"
        getch();
                //a inbuilt function for new screen
}

void DELETE_ACCOUNT()           //a function to delete account
{
    Acc rec;                   //declaring 'rec' as a structure variable
    int n;                     //declaring 'n' as a integer variable
    ifstream fl;                    //declaring an object of ifstream(to operate input operations of fstream) with 'fl'
    fl.open("success.dat",ios::binary);            //opening file with a external name "success.dat"
    ofstream fl2;                    //declaring an object of ofstream(to operate output operations of fstream) with 'fl2'
    fl2.open("Temp.dat",ios::out|ios::binary);             //opening another file with another name "Temp.dat" in (write)out mode
        cout<<"\t\t\t   ***ACCOUNT DELETION FORM***";
        cout<<endl<<endl<<endl;
        cout<<"\n  ENTER THE A/C NO. OF PERSON WHOM RECORD TO BE DELETE : ";
            cin>>n;            //here 'n' is taking the A/C no. of person whom record is to be deleted
    while(fl.read((char*)&rec,sizeof(rec)))           //to read record from file
    {
        //here it is reading all the A/C no.'s information other than the entered and writing them into another file named "Temp.dat" 
        if(rec.Ano()!=n)
            fl2.write((char*)&rec,sizeof(rec));
    }
        cout<<"\n  THE ACCOUNT HAS BEEN DELETED...";
    fl.close();               //closing the file named "success.dat"
    fl2.close();             //closing the file named "Temp.dat"
    remove("success.dat");           //removing the file named "success.dat" by using a inbuilt function 'remove();'
    rename("Temp.dat","success.dat");           //renaming the file named "Temp.dat" as "success.dat"  by using a inbuilt function 'rename();'
    getch(); //a inbuilt function for new screen
}

int LOAN_MENU()
{
  
    int choice;
        cout<<setw(40)<<"*********************"<<endl;
        cout<<setw(40)<<"***   LOAN MENU   ***"<<endl;
        cout<<setw(40)<<"*********************";
        cout<<"\n\n 1. TO TAKE LOAN";
        cout<<"\n 2. TO DEPOSIT LOAN";
        cout<<"\n 3. SEE ACCOUNT";
        cout<<"\n 4. ALL LOAN HOLDERS LIST";
        cout<<"\n 5. FOR MAIN MENU";
        cout<<"\n Enter your choice : ";
            cin>>choice;
    return(choice);
}

void seeloan()     //a function to se the details of a specific account
{
    fstream fl;
    Acc rec;                  //declaring an object of fstream with 'fl'
                            //a inbuilt function for a new screen
    int n=0,found=0;           //declaring 'n' and 'found' as integer variable initiating with value '0'
        cout<<"\t\t\t  ***ACCOUNT DETAILS***";
        cout<<endl<<endl<<endl;
        cout<<"\t ENTER THE A/C NO. OF PERSON WHOM DETAILS TO BE ENQUIRED  : ";
        cin>>n;              //n is here taking the A/C no. of the person whom balance to be enquire
    fl.open("success.dat",ios::in|ios::binary);               //opening file with an external file name "success.dat" in (read)in mode for reading  record  
    fl.read((char*)&rec,sizeof(rec));                      //to read record from file
    while(fl)                   //while(!fl.eof())
    {
        if(rec.Ano()==n)
        {
            rec.loanAcc();
            found=1;                 //if A/C no. matched with the existing A/C no.'s value of found is changed
        }
        fl.read((char*)&rec,sizeof(rec));             //to read record from file
    }
        if(found==0)              //if value of found is not changed above means A/C does not exist
            cout<<"\nInvalid A/C No.";
    fl.close();              //closing the file named "success.dat"
        getch();
}

void loan()
{
    
    int pos=-1;
    Acc rec;
    int ac;
    fstream fl;
    int choice;
        cout<<setw(40)<<"*********************"<<endl;
        cout<<setw(40)<<"***   LOAN MENU   ***"<<endl;
        cout<<setw(40)<<"*********************";
        cout<<"\n\n 1. TO TAKE LOAN";
        cout<<"\n 2. TO DEPOSIT LOAN";
        cout<<"\n 3. SEE ACCOUNT";
        cout<<"\n 4. ALL LOAN HOLDERS LIST";
        cout<<"\n 5. FOR MAIN MENU";
        cout<<"\n Enter your choice : ";
          cin>>choice;
    do
    {
        switch(choice)
        {
            case 1 :   
                fl.open("success.dat",ios::in|ios::out|ios::binary);
                    cout<<setw(40)<<"LOAN WITHDRAWING MENU";
                    cout<<"\n\n Enter your Account No. : ";
                            cin>>ac;
                fl.read((char*)&rec,sizeof(rec));                        //to read record from file
                while(!fl.eof())                   //while(!fl.eof())
                {
                    if(rec.Ano()==ac)
                    {
                        rec.ldepo();
                        pos=fl.tellg()-sizeof(rec);          //'pos' is now contain the position where the current record begins(matching)
                            break;
                    }
                    fl.read((char*)&rec,sizeof(rec));               //to read record from file
                }
                    if(pos>-1)
                    {
                        rec.lon1();
                        fl.seekp(pos,ios::beg);                   //'seekp' has been used to put the write pointer of file at the location mentioned by pos which is in the beginning of the record in which amount is to be update 
                        fl.write((char*)&rec,sizeof(rec));              //to write the updated  record in file
                            cout<<"\n\n\t THE LOAN AMOUNT HAS BEEN WITHDRAWN SUCCESSFULLY";
                    }
                    else
                        cout<<"\n\t A/C NOT EXIST";
                fl.close();
                    getch();
                choice=LOAN_MENU();
                    break;
            case 2 :   
                fl.open("success.dat",ios::in|ios::out|ios::binary);
                   cout<<setw(40)<<"LOAN DEPOSITING MENU";
                   cout<<"\n\n Enter your Account No. : ";
                       cin>>ac;
                fl.read((char*)&rec,sizeof(rec));                        //to read record from file
                while(!fl.eof())                   //while(!fl.eof())
                {
                    if(rec.Ano()==ac)
                    {
                        rec.ldepo();
                        pos=fl.tellg()-sizeof(rec);          //'pos' is now contain the position where the current record begins(matching)
                            break;
                    }
                    fl.read((char*)&rec,sizeof(rec));               //to read record from file
                }
                    if(pos>-1)
                    {
                        rec.lon2();
                        fl.seekp(pos,ios::beg);                   //'seekp' has been used to put the write pointer of file at the location mentioned by pos which is in the beginning of the record in which amount is to be update 
                        fl.write((char*)&rec,sizeof(rec));              //to write the updated  record in file
                            cout<<"\n\n\t THE LOAN AMOUNT HAS BEEN DEPOSITED SUCCESSFULLY";
                    }
                    else
                        cout<<"\n\t A/C NOT EXIST";
                fl.close();
                    getch();
                choice=LOAN_MENU();
                    break;
            case 3 : seeloan();
                     choice=LOAN_MENU();
                         break;
            case 4 :   
                fl.open("success.dat",ios::in|ios::out|ios::binary);
                fl.read((char*)&rec,sizeof(rec));          //to read records from file
                    cout<<setw(40)<<" ALL LOAN HOLDERS LIST";
                    cout<<endl<<endl<<endl;
                    cout<<"*********************************************************"<<endl;
                    cout<<"    A/C NO.\t NAME\t   AGE\t  A/C TYPE\t  LOAN"<<endl;
                    cout<<"*********************************************************"<<endl;
                while(fl)                   //to display all the accounts by end of file
                {
                    rec.allLOAN();
                    fl.read((char*)&rec,sizeof(rec));                   //to read records from file
                }
                fl.close();
                    getch();
                choice=LOAN_MENU();
                    break;
        }
    }while(choice!=5);
}

void  seeacc()     //a function to se the details of a specific account
{
    fstream  fl;
    Acc  rec;                  //declaring an object of fstream with 'fl' //a inbuilt function for a new screen
    int n=0,found=0;           //declaring 'n' and 'found' as integer variable initiating with value '0'
        cout<<"\t\t\t  ***ACCOUNT DETAILS***";
        cout<<endl<<endl<<endl;
        cout<<"\t ENTER THE A/C NO. OF PERSON WHOM DETAILS TO BE ENQUIRED  : ";
            cin>>n;              //n is here taking the A/C no. of the person whom balance to be enquire
    fl.open("success.dat",ios::in|ios::binary);               //opening file with an external file name "success.dat" in (read)in mode for reading  record  
    fl.read((char*)&rec,sizeof(rec));                      //to read record from file
    while(fl)                   //while(!fl.eof())
    {
        if(rec.Ano()==n)
        {
            rec.AccDetails();
            found=1;                 //if A/C no. matched with the existing A/C no.'s value of found is changed
        }
        fl.read((char*)&rec,sizeof(rec));             //to read record from file
    }
        if(found==0)              //if value of found is not changed above means A/C does not exist
            cout<<"\nInvalid A/C No.";
    fl.close();              //closing the file named "success.dat"
        getch();            //a inbuilt function for new screen
}

int MAIN_MENU()
{
    int choice;
        cout<<setw( 40 )<<"-------------"<<endl;
        cout<<setw( 40 )<<"| MAIN MENU |"<<endl;
        cout<<setw( 40 )<<"-------------"<<endl<<endl<<endl;
        cout<<"   UNDER ADMIN CONTROL(PASSWORD rqeuired)"<<endl;
        cout<<"           1. NEW ACCOUNT"<<endl;
        cout<<"           2. MODIFY ACCOUNT"<<endl;
        cout<<"           3. DELETE ACCOUNT"<<endl;
        cout<<"           4. ALL ACCOUNT HOLDERS"<<endl;
        cout<<"           5. LOAN MENU"<<endl<<endl;
        cout<<"   USERS ACCESS"<<endl;
        cout<<"           6. SEE ACCOUNT"<<endl;
        cout<<"           7. BALANCE ENQUIRY"<<endl;
        cout<<"           8. DEPOSIT AMOUNT"<<endl;
        cout<<"           9. WITHDRAW AMOUNT"<<endl;
        cout<<"           10. EXIT"<<endl;
        cout<<"           Select your option from(1-10) : ";
        cin>>choice;
    return(choice);
}
int main()
{
    int choice;
    char passw[10]={'*','*','*','*','*'};
    //FIRST SCREEN
        cout<<endl<<endl<<endl<<"\t\t\t  $$$$$$$$$$$$$$$$$$$$$$$$";
        cout<<endl<<endl<<endl<<"\t\t\t    * BANK MANAGEMENT *";
        cout<<endl<<endl<<endl<<"\t\t\t  $$$$$$$$$$$$$$$$$$$$$$$$";
        cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t     MADE BY :  DHWANIT"<<endl<<endl;
        //cout<<endl<<endl<<"\t\t\t     CLASS : XII A";
        //cout<<endl<<endl<<"\t\t\t     SCHOOL : JKPS";
    getch();
                //a inbuilt function for new screen
    //MAIN MENU
        cout<<setw( 40 )<<"-------------"<<endl;
        cout<<setw( 40 )<<"| MAIN MENU |"<<endl;
        cout<<setw( 40 )<<"-------------"<<endl<<endl<<endl;
        cout<<"   UNDER ADMIN CONTROL(PASSWORD required)"<<endl;
        cout<<"           1. NEW ACCOUNT"<<endl;
        cout<<"           2. MODIFY ACCOUNT"<<endl;
        cout<<"           3. DELETE ACCOUNT"<<endl;
        cout<<"           4. ALL ACCOUNT HOLDERS"<<endl;
        cout<<"           5. LOAN MENU"<<endl<<endl;
        cout<<"   USERS ACCESS"<<endl;
        cout<<"           6. SEE ACCOUNT"<<endl;
        cout<<"           7. BALANCE ENQUIRY"<<endl;
        cout<<"           8. DEPOSIT AMOUNT"<<endl;
        cout<<"           9. WITHDRAW AMOUNT"<<endl;
        cout<<"           10. EXIT"<<endl;
        cout<<"           Select your option from(1-10) : ";
        cin>>choice;
        char pass[10];
    do
    {
        switch(choice)
        {
            case 1 : cout<<"\n\nENTER PASSWORD : ";
                        cin>>pass;
                        if(strcmp(pass,passw)==0)
                        {
                            NEW_ACCOUNT();              //call of function named NEW_ACCOUNT
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                    else
                    {
                        cout<<"\nWRONG PASSWORD!!!!";
                        getch();
                        choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                    }
                        break;
            case 6 :  seeacc();          //call of function named seeacc
                    choice=MAIN_MENU();         //call of function named MAIN_MENU and storing  the value returned by function in choice 
                        break;
            case 7 :BALANCE_ENQUIRY();          //call of function named BALANCE_ENQUIRY
                    choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        break;
            case 4 : cout<<"\n\nENTER PASSWORD : ";
                        cin>>pass;
                        if(strcmp(pass,passw)==0)
                        {
                            ALL_ACCOUNT_HOLDERS();      //call of function named ALL_ACCOUNT_HOLDERS
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                        else
                        {
                            cout<<"\nWRONG PASSWORD!!!!";
                            getch();
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                        break;
            case 8 :DEPOSIT_AMOUNT();           //call of function named DEPOSIT_AMOUNT
                    choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        break;
            case 9 :WITHDRAW_AMOUNT();          //call of function named WITHDRAW_AMOUNT
                    choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        break;
            case 2 : cout<<"\n\nENTER PASSWORD : ";
                        cin>>pass;
                        if(strcmp(pass,passw)==0)
                        {
                            MODIFY_ACCOUNT();           //call of function named MODIFY_ACCOUNT
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                        else
                        {
                            cout<<"\nWRONG PASSWORD!!!!";
                            getch();
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                            break;
            case 3 : cout<<"\n\nENTER PASSWORD : ";
                        cin>>pass;
                        if(strcmp(pass,passw)==0)
                        {
                            DELETE_ACCOUNT();           //call of function named DELETE_ACCOUNT
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                        else
                        {
                            cout<<"\nWRONG PASSWORD!!!!";
                            getch();
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                        break;
            case 5 : cout<<"\n\nENTER PASSWORD : ";
                        cin>>pass;
                        if(strcmp(pass,passw)==0)
                        {
                            loan();
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                        else
                        {
                            cout<<"\nWRONG PASSWORD!!!!";
                            getch();
                            choice=MAIN_MENU();         //call of function named MAIN_MENU and storing the value returned by function in choice 
                        }
                    break;
            case 10 :exit(0);
                    break;
            default : cout<<"\nWRONG CHOICE !!!!";
                        cout<<"\nRE-ENTER CORRECT CHOICE : ";
                        cin>>choice;
        }
        
    }while(choice!=10);
}

