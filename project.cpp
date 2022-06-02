#include <iostream>
#include<string>
#include<cctype>
#include<fstream>
using namespace std;
int indx = -1;
bool found;
int trying,trying2,trying3,trying4;

// The libary Section
struct Movie{
    string name;
    string category;
    string actor;
    double rate;
    double praice;
};

struct Series{
    string name;
    string category;
    string actor;
    double rate;
    double praice;
};

struct Book{
    string name;
    string category;
    string author;
    double rate;
    double praice;
};

Movie movie1={"Jumanji","Comedy","Dwayne Johnson",6.9,18.45},movie2={"Get hard","Comedy","Kevin hart ",6,76.2},movie3={"Life or something like it ","Comedy","Angelina jolie",5.8,22.43},movie4={"hitch","Comedy","will smith",6.7,56.2},movie5={"Im still here","Comedy","Joaquin phoenix",6.2,44},movie6={"San Andreas","Action","Dwayne  Johnson ",6.1,28.90},movie7={"Faster","Action","Dwayne  Johnson",6.4,39.3},movie8={"Wanted","Action","Angelina jolie",6.7,56.2},movie9={"Salt","Action","Angelina jolie",6.5,22.43},movie10={"gladiator","Action","Joaquin phoenix",8.5,22.43}, movie11={"The upside","Drama","Kevin hart",7,56.2},movie12={"Fatherhood","Drama","Kevin hart",6.6,36},movie13={"Buried","Drama","Ryan Reynolds",7,22.43},movie14={"the pursuit of happiness ","Drama","will smith",7,18.45},movie15={"joker","Drama","Joaquin phoenix ",8.4,56.2},movie16={"Life","Horror","Ryan Reynolds ",6.6,22.43},movie17={"Hush","Horror","Kate Siegel ",6.6,36},movie18={"Lets go down ","Horror","Kate Siegel ",7.5,36},movie19={"Gretel & Hansel","Horror","Sophia Lillis",5.4,43},movie20={"IT","Horror","Sophia Lillis",7.3,18.45};

Series series1={"The originals","Horror","Joseph Morgan",8.3,43},series2={"The Vampire Diaries","Horror","Joseph Morgan",7.8,29.99},series3={"True Blood","Horror","Kelly Overton",7.5,29.99},series4={"Stranger Things","Horror","Millie Bobby", 8.7,38},series5={"Van Helsing","Horror","Kelly Overton",6,50.20},series6={"Anne With An E","Drama","Amybeth McNulty",8.7,43},series7={"Clean Break ","Drama","Amybeth McNulty",6.4,38},series8={"Desperate Romantics","Drama","Aidan Turner",7.5,50.20},series9={"Poldark","Drama","Aidan Turner",8.3,38},series10={"The Good Doctor","Drama","Freddie Highmore",8.1,50.20},series11={"Friends","Comedy","Matt LeBlanc",8.9,29.99},series12={"Joey","Comedy","Matt LeBlanc",6,43},series13={"Modern Family","Comedy","Millie Bobby",8.5,29.99},series14={"Off Centre","Comedy","Josh Radnor",7.8,43},series15={"How I met Your Mother","Comedy","Josh Radnor",8.3,29.99},series16={"The Waling Dead","Action","Jon Bernthal",8.2,50.20},series17={"The Defenders","Action","Charlie Cox",7.3,38},series18={"The Vault","Action","Freddie Highmore",6.4,38},series19={"The Daredevil","Action","Charlie Cox",8.6,43},series20={"The Punisher","Action","Jon Bernthal",8.5,29.99};

Book book1={"Rosemary's Baby","Horror","Ira Levin",9.5,45.50},book2={"We Have Always Lived in the Castle","Horror","Shirley Jackson",9,33.9},book3={"The Haunting of Hill House","Horror","Shirley Jackson",9,29.99},book4={"Lord of the Flies","Horror","Shirley Jackson",9.2,57},book5={"A History of Western Philosophy ","Horror","William Golding",9.4,33.9},book6={"A History of Western Philosophy","Philosophy","Bertrand Russell",9.7,33.9},book7={"Meditations","Philosophy","Marcus Aurelius",9.2,45.50},book8={"Zen and the Art of Motorcycle Maintenance","Philosophy","Robert M. Pirsig",8.8,29.99},book9={"Man’s Search for Meaning","Philosophy","Viktor Frankl",9.4,29.99},book10={"The problems of philosophy","Philosophy","Bertrand Russell",8.9,33.9},book11={"The History of the Ancient World ","Historical","Susan Wise Bauer",9.6,57},book12={"A Woman of No Importance","Historical","Sonia Purnell",9.1,33.9},book13={"The Crusades ","Historical","Thomas Asbridge",7.7,57},book14={"Stalingrad ","Historical","Antony Beevor",9.5,45.50},book15={"The Second World War","Historical","Antony Beevor",9.3,29.99},book16={"The 7 Habits of Highly Effective People","Self-development","Stephen. R. Covey",9.7,33.9},book17={"Eat That Frog!The 48 Laws of Power","Self-development","Brian Tracy",9.7,45.50},book18={"Feeling Good","Self-development","David D. Burns",9,29.99},book19={"First Things First ","Self-development","Stephen. R. Covey",9.5,57},book20={"Trust and inspire","Self-development","Stephen. R. Covey",10,45.50};

Movie movie[]={movie1,movie2,movie3,movie4,movie5,movie6,movie7,movie8,movie9,movie10,movie11,movie12,movie13,movie14,movie15,movie16,movie17,movie18,movie19,movie20};
Series series[]={series1,series2,series3,series4,series5,series6,series7,series8,series9,series10,series11,series12,series13,series14,series15,series16,series17,series18,series19,series20};

Book book[]={book1,book2,book3,book4,book5,book6,book7,book8,book9,book10,book11,book12,book13,book14,book15,book16,book17,book18,book19,book20};
// Selling Section
void Selling(int);
double SertchMM(string M);
double SertchSS(string M);
double SertchBB(string M);
// Bill Section
void FBill(double);
double BIll(double);
double BIll(double,double);

// membership Section
void membership();
// Suggestion Section
void Suggestion(int);
void suggestionM(char );
void suggestionS(char);
void suggestionB(char );
// Adding new rate Section
double SertchM(string);
double SertchS(string);
double SertchB(string);
double NewRate(double&,double&);
// Adding new Suggestion Section
typedef Movie*pointer;
typedef Series*intptr;

void SuggestionMM(pointer movie1);
void SuggestionSS(intptr series1);
void SuggestionBB(Book  *book1);





int main() {
    int size = 20;
    int  SBch, end,ch;
   string Mname,Sname,Bname;
    double NR, rate;
    Movie *m1=new Movie[size];
    Series *s1=new Series [size];
    Book *b1=new Book [size];
   
cout<<"\n==============================( Welcome To Our Libarary System )=================================\n";
cout<<"\n\t\t\tThis Electronic Library Designed For Your Need\n\t\t\t";
do{

cout<<"\n==================================================================================================\n";

    cout<< "1-  Buying"<< endl;
    cout<< "2-  Suggestion"<< endl;
    cout<< "\nDo you want to suggestion or do you want to buy?\t";
    cin>>SBch;
    
    cout<<endl;
   cout<<"\n==================================================================================================\n";
    if(SBch==1)
    {Selling(SBch);
      

    }
    if(SBch==2)
    {Suggestion(SBch);
    
    }
    cout<<endl;
    cout<<"\nDo You Wanna Try Again ? Press positive number if yes :\t";
    cin>>trying;
    cout<<endl;
    }while( trying > 0);
    cout<<endl;
    
int choice3;
do{
    
    //Adding  Suggestions Section
    
   if (indx < size - 1)
    cout<<"\n==================================================================================================\n";
        cout<<"\n\t *Adding  Suggestions Section *\n\t";
  cout<<"\n==================================================================================================\n";
        cout<<"\n \nEnter (1) to add movie.\n \nEnter (2) to add series.\n \nEnter (3) to add book.\n \nEnter (0) to Exit. \n";
  cout<<" \nDo you have suggestion to add? \t";
      cin>>ch;
        switch(ch){
  case 1:
  SuggestionMM(m1);
  cout<<"\n*Thank you for your suggestion*\n";
  cout<<"\n*The Movie Has Been Saved In The Library.*\n";
  break;
 case 2:
  SuggestionSS(s1);
  cout<<"\n*Thank you for your suggestion*\n";
  cout<<"\n*The Series Has Been Saved In The Library.*\n";
  break;
 case 3 :
  SuggestionBB(b1);
  cout<<"\n*Thank you for your suggestion*\n";
  cout<<"\n*The Book Has Been Saved In The Library.*\n";
  break;
  default:
cout<<"\nWould You Try Again ? (Press Positive Number).\t ";
cin>>choice3;
}
  
  }while( choice3 > 0);
  cout<<endl;


          int choice1;
    
    //Adding New Rate Section
    
    do{
     cout<<"\n==================================================================================================\n";
        cout<<" \t\t\t * Adding New Rate Section *\t\t\t\n";
     cout<<"\n==================================================================================================\n";
        cout<<"\n \nEnter (1) to add movie.\n \nEnter (2) to add series.\n \nEnter (3) to add book.\n \nEnter (0) to Exit.\n ";
           cout<<" \nDo you have Rate to add? \t";
          cin>>end;
        switch(end){
        
            case 1:
                 cout<<"\n==================================================================================================\n";
                    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
                cout<<"\nEnter the movie please : \t";
                getline(cin >> ws, Mname);
                cout<<endl;
                rate = SertchM(Mname);
                 for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++){
                 if(Mname==movie[i].name){
                 
                cout<<"\nEnter the new movie rate please : \t";
                cin>>NR;
                cout<<endl;
                cout<<"\nThe New Rate is :\t "<< NewRate(rate,NR);
                cout<<endl;
                 cout<<"\nThank you for your help \n";
                  cout<<endl;
                 cout<<"\n*The New Rate Has Been Added To The Library.*\n";
            }
           
        }
         
            break;
          case 2:
               cout<<"\n==================================================================================================\n";
                  cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
              cout<<"\nEnter the series please : \t";
             getline(cin >> ws, Mname);
              cout<<endl;
              rate = SertchS(Mname);
                       for(int i=0;i<sizeof(series)/sizeof(series[0]);i++){
                 if(Mname==series[i].name){
                 
                cout<<"\nEnter the Series new rate please : \t";
                cin>>NR;
                cout<<endl;
                cout<<"\nThe New Rate is : \t"<< NewRate(rate,NR);
                cout<<endl;
                 cout<<"\nThank you for your help \n";
                  cout<<endl;
                 cout<<"\n*The New Rate Has Been Added To The Library.*\n";
            }
           
        }
          break;
          case 3 :
               cout<<"\n==================================================================================================\n";
                  cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
              cout<<"\nEnter the book please :\t ";
              getline(cin >> ws, Mname);
              cout<<endl;
              rate = SertchS(Mname);
                     for(int i=0;i<sizeof(book)/sizeof(book[0]);i++){
                 if(Mname==book[i].name){
                 
                cout<<"\nEnter the book new rate please : \t";
                cin>>NR;
                cout<<endl;
                cout<<"\nThe New Rate is : \t"<< NewRate(rate,NR);
                cout<<endl;
                 cout<<"\nThank you for your help \n";
                 cout<<endl;
                 cout<<"\n*The New Rate Has Been Added To The Library.*\n";
           
            
                 
           }
           
       }
              
          break;
          default:
            cout<<"\nDo You Wanna Try Again ? (Press Negative Number To Stop) : \t";
            cin>>choice1;
             cout<<"\n==================================================================================================\n";
        }
          }while(choice1>0);
          cout<<endl;
    
    cout<<"\n==============================( Thank You For Your Help )=================================\n";
    cout<<"\n\t\t\t\tHave a Nice Day :) \n\t\t\t\t";
    

    return 0;
}

// Selling Section
void Selling(int ch){
    string name;
    double price=0.0;
cout<<endl;
cout<<"1.Series Section\n2.Movie Section\n3.Book Section\n";
cout<<"\nChoose Which Section That You Want:\t";
cin>>ch;
 cout<<"\n==================================================================================================\n";
    switch(ch)
{
case 1 :
cout<<"\t\t\t*Series Section* \n";
     
for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
{
 cout<<"\n==================================================================================================\n";
cout<<"\tseries("<<i+1<<") | series Name : "<<series[i].name<<" \t\n ";
cout<<"\tseries Category : "<<series[i].category<<"\t\n ";
cout<<"\tseries Actor : "<<series[i].actor<<"\t\n ";
cout<<"\tseries Rate : "<<series[i].rate<<"\t\n ";
cout<<"\tseries Price : "<<series[i].praice<<"\t\n ";
 
    }
  cout<<"\n==================================================================================================\n";
    cout<<endl;
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
       cout<<"\nEnter The series Name : \t";
    getline(cin >> ws, name);
    cout<<endl;
    price= SertchSS(name);
    for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
    {
         if(name==series[i].name)
         
             FBill(price);
    }

    break;
    case 2:
 cout<<"\n==================================================================================================\n";
cout<<"\t\t\t Movie Section \n";
for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
{
   cout<<"\n==================================================================================================\n";
cout<<"\t\n movie ("<<i+1<<") | Movie Name : "<<movie[i].name<<"  \t\n";

cout<<"\t Movie Category : "<<movie[i].category<<"  \t\n";
cout<<"\t Movie Actor : "<<movie[i].actor<< "  \t\n";
cout<<"\t Movie Rate : "<<movie[i].rate<< "  \t\n";
cout<<"\t Movie Price : "<<movie[i].praice<< "  \t\n";

    }
        cout<<"\n==================================================================================================\n";
    cout<<endl;
    cout<<"\n(Note: Please Be Aware Of The Captial And Small Letters.)\n";
    
     cout<<"\nEnter The Movie Name : \t";
    getline(cin >> ws, name);
cout<<endl;
    price= SertchMM(name);
        for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
    {
         if(name==movie[i].name)
             FBill(price);
    }
  cout<<"\n==================================================================================================\n";
  
        break;
        case 3:
        cout<<"\n==================================================================================================\n";
    cout<<"\t\t\t Books Section \n";
for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
{
     cout<<"\n==================================================================================================\n";
cout<<"\t\n book ("<<i+1<<") | book Name : "<<book[i].name<<"  \t\n";

cout<<"\t book Category : "<<book[i].category<<"  \t\n";
cout<<"\t book Actor : "<<book[i].author<< "  \t\n";
cout<<"\t book Rate : "<<book[i].rate<< "  \t\n";
cout<<"\t book Price : "<<book[i].praice<< "  \t\n";
    }
        cout<<"\n==================================================================================================\n";
    cout<<endl;
          cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
     cout<<"\nEnter The Book Name : \t";
    getline(cin >> ws, name);
    cout<<endl;
    price= SertchBB(name);
        for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
    {
         if(name==book[i].name)
             FBill(price);
                
               
        
    }
break;
default:
cout<<"\nInvaild Option .."<<endl;
    
}
}


double SertchMM(string M){
    double price = 0.0;
    for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
    {  found=false;
        if( M==movie[i].name)
        {
            price=movie[i].praice;
             found=true;
             cout<<"The Movie Is Found ,"<<"The Price Of It :\t"<<price<<endl;
             break;
            
        }
    }
    if(!found){
            
            cout<<"\nSorry, The Movie Name That You Search For Is Not Exists."<<endl;

            }

    return price;
}

double SertchSS(string S){
    double price = 0.0;
    for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
    { found=false;
        if(S==series[i].name)
        {
            price= series[i].praice;
            found=true;
             cout<<"The Series Is Found ,"<<"The Price Of It :\t"<<price<<endl;
           
            break;
        }
   
        
    }
     if(!found){

    cout<<"\nSorry, The Seies Name That You Search For Is Not Exists."<<endl;
    }
    return price;
    }


double SertchBB(string B){
    double price=0.0;
    for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
    { found=false;
        if(B==book[i].name)
        {
            price=book[i].praice;
            found=true;
            cout<<"The Book Is Found ,"<<"The Price Of It :\t"<<price<<endl;;
           
            break;
        }
  
}
  if(!found){

    cout<<"\nSorry, The Book Name That You Search For Is Not Exists."<<endl;
 
    }
    return price;
}
// The Bill Section

void FBill(double cost){
    string A,A2;
cout<<"\nDo you have membership ? (Yes/No):\t";
cin>>A;
if (A=="Yes"||A=="yes"|| A=="YES"){
  cout<<"your total bill is : "<< BIll(cost,0.10);
  
  
}
else {
  cout<<endl;
  cout<<"\nAre you interested in getting a membership For A Discounts? (Yes/No):\t ";
  cin>>A2;
  if (A2 =="yes"||A2=="Yes"||A=="YES"){
      membership();
      cout<<"\nyour total bill is After Discounts:\t "<< BIll(cost,0.10);
      cout<<endl;
  }
  else
  {
  
      cout<<"\nyour total bill is : "<< BIll(cost)<< endl;
  }
}
}
double BIll(double cost){
double b;
b=cost;
return b;
}
    
double BIll(double cost ,double d)
{
    double b;
b=cost-(cost*d);
return b;
}


// The MemberShip Section

void membership()
{
int choice3;
do{

    ofstream OutFile;
    OutFile.open("membershipw.txt",ios::app);
         cout<<"\n==================================================================================================\n";
    cout<<"\n\t The MemberShip Section \n\t";
 cout<<"\n==================================================================================================\n";
   

    cout<<" \nWe Have 3 Ways To Get A MemberShip :\n";
    cout<<"1. Per Week.\n";
    cout<<"2. Per Month.\n";
    cout<<"3. Per Year.\n";
    cout<<"\n==================================================================================================\n";
    cout<<"\nNote: To Exit From MemberShip Section ( Press 4 ).";
cout<<endl;
cout<<"\nChoose What Plan Suits You : \t";
int choice = 0;
    cin >> choice;
    if(OutFile.is_open()==true)
    {
     string name;
    string ID;
    int age;
    string PhoneN;

    
    switch(choice)
    {
        case 1:
    OutFile<<"\n The Subscription Per Week : ";
            cout<<"\nPlease Enter Your Full Name:\t";
getline(cin>>ws,name);
OutFile<<name<<","<<endl;

     
            cout<<"\nPlease Enter Your ID Number:\t";
          getline(cin, ID);
          OutFile<<ID<<","<<endl;
            while(ID.length()!=10)
            {
                cout<<"\nThe ID Number Should 10 Digits \n";
                cout<<"\nPlease Enter Your ID Number:\t";
                getline(cin, ID);
                OutFile<<ID<<","<<endl;
            }

            cout<<"\nPlease Enter Your Phone Number:\t";
            getline(cin,PhoneN);
             OutFile<<PhoneN<<","<<endl;
            while(PhoneN.length()!=10)
            {
                cout<<"\nThe Phone Number Should 10 Digits \n";
                cout<<"\nPlease Enter Your Phone Number:\t";
                getline(cin,PhoneN);
                 OutFile<<PhoneN<<","<<endl;
            }

            cout<<"\nPlease Enter Your Age:\t";
            cin>>age;
            OutFile<<age<<endl;
            if(age<10)
            {
                cout<<"You Are Not Allowed To Get A MemberShip\n";
            }
            else{
           
                
            cout<<"\n*Your Supscription Has Been Activited In Plan 1*.\n";
            cout<<"\n*Thank You !!*\n";
           
            
        }
    
            break;
        
        case 2:
            OutFile<<"\n The Subscription Per Month : ";
            cout<<"\nPlease Enter Your Full Name:\t";
            
            getline(cin >> ws, name);
OutFile<<name<<","<<endl;
            cout<<"\nPlease Enter Your ID Number:\t";
            getline(cin >> ws, ID);
            OutFile<<ID<<","<<endl;
            while(ID.length()!=10)
            {
                cout<<"\nThe ID Number Should 10 Digits \n";
                cout<<"\nPlease Enter Your ID Number:\t";
                getline(cin, ID);
                OutFile<<ID<<","<<endl;
            }
            cout<<"\nPlease Enter Your Phone Number:\t";
            getline(cin,PhoneN);
            OutFile<<PhoneN<<","<<endl;
            while(PhoneN.length()!=10)
            {
                cout<<"\nThe Phone Number Should 10 Digits \n";
                cout<<"\nPlease Enter Your Phone Number:\t";
                getline(cin,PhoneN);
                OutFile<<PhoneN<<","<<endl;
            }

            cout<<"\nPlease Enter Your Age:\t";
            cin>>age;
            OutFile<<age<<endl;
            if(age<10)
            {
                cout<<"You Are Not Allowed To Get A MemberShip\n";
            }
            else{
                
            cout<<"\n*Your Supscription Has Been Activited In Plan 2*.\n";
            cout<<"\n*Thank You* !!\n";
        }
            break;
 
        case 3:
        OutFile<<"\n The Subscription Per Year :";
            cout<<"\nPlease Enter Your Full Name:\t";
           getline(cin >> ws, name);
           OutFile<<name<<","<<endl;
            cout<<"\nPlease Enter Your ID Number:\t";
            getline(cin >> ws, ID);
            OutFile<<ID<<","<<endl;
            while(ID.length()!=10)
            {
                cout<<"\nThe ID Number Should 10 Digits \n";
                cout<<"\nPlease Enter Your ID Number:\t";
                getline(cin, ID);
                OutFile<<ID<<","<<endl;
            }
            cout<<"\nPlease Enter Your Phone Number:\t";
            getline(cin,PhoneN);
            OutFile<<PhoneN<<","<<endl;
            while(PhoneN.length()!=10)
            {
                cout<<"\nThe Phone Number Should 10 Digits \n";
                cout<<"\nPlease Enter Your Phone Number:\t";
                getline(cin,PhoneN);
                OutFile<<PhoneN<<","<<endl;
            }
            
            cout<<"\nPlease Enter Your Age:\t";
            cin>>age;
            OutFile<<age<<endl;
           
            if(age<10)
            {
                cout<<"You Are Not Allowed To Get A MemberShip\n";
            }
  
            else
            {
            
                 
                
                
                 cout<<"\n*Your Supscription Has Been Activited In Plan 3.*\n";
            cout<<"\n*Thank You !!\n*";
        
            break;

        default:
            cout<<"\n==================================================================================================\n";
            cout<<"\nWould You Try Again For MemberShip? (Press Positive Number).\t";
            cin>>choice3;
            cout<<"\n==================================================================================================\n";
}
   
    OutFile.close();
    
    
}
}
}while(choice3>0);
}

// Suggestion Section

void Suggestion(int ch){
    char y = '\0',x = '\0';
     cout<<endl;
cout<<"1.Series Section\n2.Movie Section\n3.Book Section\n";
cout<<"\nChoose Which Section That You Want:\t";
cin>>ch;
 cout<<"\n==================================================================================================\n";
        switch(ch)
    {
    case 1 :
    cout<<"\t\t\t*Series Section* \n";
         
    for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
    {
     cout<<"\n==================================================================================================\n";
    cout<<"\tseries("<<i+1<<") | series Name : "<<series[i].name<<" \t\n ";
    cout<<"\tseries Category : "<<series[i].category<<"\t\n ";
    cout<<"\tseries Actor : "<<series[i].actor<<"\t\n ";
    cout<<"\tseries Rate : "<<series[i].rate<<"\t\n ";
        }
     cout<<"\n==================================================================================================\n";
        suggestionS(ch);
        break;
        case 2:
   cout<<"\n==================================================================================================\n";
    cout<<"\t\t\t Movie Section \n";
    for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
    {
 cout<<"\n==================================================================================================\n";
    cout<<"\t\n movie ("<<i+1<<") | Movie Name : "<<movie[i].name<<"  \t\n";

    cout<<"\t Movie Category : "<<movie[i].category<<"  \t\n";
    cout<<"\t Movie Actor : "<<movie[i].actor<< "  \t\n";
    cout<<"\t Movie Rate : "<<movie[i].rate<< "  \t\n";
 

        }
        
            suggestionM(x);
         cout<<"\n==================================================================================================\n";
            break;
       
            case 3:
        cout<<"\t\t\t Books Section \n";
    for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
    { cout<<"\n==================================================================================================\n";

    cout<<"\t\n book ("<<i+1<<") | book Name : "<<book[i].name<<"  \t\n";

    cout<<"\t book Category : "<<book[i].category<<"  \t\n";
    cout<<"\t book Actor : "<<book[i].author<< "  \t\n";
    cout<<"\t book Rate : "<<book[i].rate<< "  \t\n";
    

        }
   cout<<"\n==================================================================================================\n";
        suggestionB(y);
    break;
    default:
    cout<<"\nInvaild Option .."<<endl;
    }
        
    }


void suggestionM(char ch){
    char choice;
    
    do{
    cout<<endl;
    cout<<"1.Horror\n2.Comedy\n3.Action\n4.Drama\n\nWhat Do You Prefer ?\t";
    cin>>choice;
  
    
    if(choice=='1'){

 
 cout<<"\n==================================================================================================\n";
    cout<<"Movies Name That We Suggest For You :\n"<<endl;
 
for(int i=0;i<1;i++)
{
cout<<movie16.name<<endl;
cout<<movie17.name<<endl;
cout<<movie18.name<<endl;
cout<<movie19.name<<endl;
cout<<movie20.name<<endl;
}
       cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
       cout<<"\nChoose Which Movie That You Want : \t";
   string name;
getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
{ found=false;
    if(name==movie[i].name)
    {
         cout<<"\n==================================================================================================\n";
        cout<<"\nThe Movie That You Choosed is :\t";
        cout<<movie[i].name<<endl;
        
        cout<<"The Rate Of The Movie :"<<movie[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Movie Name That You Search For Is Not Exists."<<endl;
break;

}
}
else if (choice=='2')
{
 cout<<"\n==================================================================================================\n";
    cout<<"Movies Name That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<movie1.name<<endl;
        cout<<movie2.name<<endl;
        cout<<movie3.name<<endl;
        cout<<movie4.name<<endl;
        cout<<movie5.name<<endl;
    }
 
      cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
             cout<<"\nChoose Which Movie That You Want : \t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
{ found=false;
    if(name==movie[i].name)
    {
        cout<<"\nThe Movie That You Choosed is :\t";
        cout<<movie[i].name<<endl;
        
        cout<<"The Rate Of The Movie :"<<movie[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Movie Name That You Search For Is Not Exists."<<endl;
break;

}
}
else if(choice=='3')
{
 cout<<"\n==================================================================================================\n";
    cout<<"Movies Name That We Suggest For You :\n"<<endl;
    
    for(int i=0;i<1;i++)
    {
            cout<<movie6.name<<endl;
        cout<<movie7.name<<endl;
        cout<<movie8.name<<endl;
        cout<<movie9.name<<endl;
        cout<<movie10.name<<endl;
        
    }
    
   
      cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
        cout<<"\nChoose Which Movie That You Want : \t";
   string name;
getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
{ found=false;
    if(name==movie[i].name)
    {
        cout<<"\nThe Movie That You Choosed is :\t";
        cout<<movie[i].name<<endl;
        
        cout<<"The Rate Of The Movie :"<<movie[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Movie Name That You Search For Is Not Exists."<<endl;

}


}


else if(choice=='4')
{
    
    
 cout<<"\n==================================================================================================\n";
    cout<<"Movies Name That We Suggest For You :\n"<<endl;
    
    for(int i=0;i<1;i++)
    {
            cout<<movie11.name<<endl;
        cout<<movie12.name<<endl;
        cout<<movie13.name<<endl;
        cout<<movie14.name<<endl;
        cout<<movie15.name<<endl;
        
    }
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
    cout<<"\nChoose Which Movie That You Want : \t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
{  found=false;
    if(name==movie[i].name)
    {
        cout<<"\nThe Movie That You Choosed is :\t";
        cout<<movie[i].name<<endl;
        
        cout<<"The Rate Of The Movie :"<<movie[i].rate<<endl;
         found=true;
         break;
        
    }

}
}

     if(!found){
     
    cout<<"\nSorry, The Movie Name That You Search For Is Not Exists."<<endl;
}
cout<<endl;
    cout<<"\nWould You Search Again ( Press Positive Number If Yes):\t";
    cin>>trying2;
    
}while(trying2>0);
}
    
void suggestionS(char ch)
{
    do{
    
    char choice;
    cout<<endl;
    cout<<"1.Horror\n2.Comedy\n3.Action\n4.Drama\n\nWhat Do You Prefer ?\t";
    cin>>choice;
    
    
    if(choice=='1'){
    
 cout<<"\n==================================================================================================\n";
    cout<<"Series Name That We Suggest For You :\n"<<endl;
for(int i=0;i<1;i++)
{
cout<<series1.name<<endl;
cout<<series2.name<<endl;
cout<<series3.name<<endl;
cout<<series4.name<<endl;
cout<<series5.name<<endl;
}

      cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
      cout<<"\nChoose The Series That You Search For :\t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
{ found=false;
    if(name==series[i].name)
    {
      cout<<"\n==================================================================================================\n";
        cout<<"\nThe Seies That You Choosed is :\t";
        cout<<series[i].name<<endl;
        
        cout<<"\nThe Rate Of The Series :"<<series[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Seies Name That You Search For Is Not Exists."<<endl;
break;

}
}
else if (choice=='2')
{
 cout<<"\n==================================================================================================\n";
    cout<<"Series Name That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<series11.name<<endl;
        cout<<series12.name<<endl;
        cout<<series13.name<<endl;
        cout<<series14.name<<endl;
        cout<<series15.name<<endl;
    }
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
    cout<<"\nChoose The Series That You Search For :\t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
{ found=false;
    if(name==series[i].name)
    {
       cout<<"\n==================================================================================================\n";
        cout<<"\nThe Seies That You Choosed is :\t";
        cout<<series[i].name<<endl;
        
        cout<<"\nThe Rate Of The Series :"<<series[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Seies Name That You Search For Is Not Exists."<<endl;
break;

}
}
else if (choice=='3')
{
     cout<<"\n==================================================================================================\n";
    cout<<"Series Name That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<series16.name<<endl;
        cout<<series17.name<<endl;
        cout<<series18.name<<endl;
        cout<<series19.name<<endl;
        cout<<series20.name<<endl;
    }
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
    
    cout<<"\nChoose The Series That You Search For :\t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
{ found=false;
    if(name==series[i].name)
    {
        cout<<"\n==================================================================================================\n";
        cout<<"\nThe Seies That You Choosed is :\t";
        cout<<series[i].name<<endl;
        
        cout<<"\nThe Rate Of The Series :"<<series[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Seies Name That You Search For Is Not Exists."<<endl;
break;

}
}
else if (choice=='4')
{
 cout<<"\n==================================================================================================\n";
    cout<<"Series Name That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<series6.name<<endl;
        cout<<series7.name<<endl;
        cout<<series8.name<<endl;
        cout<<series9.name<<endl;
        cout<<series10.name<<endl;
    }
    cout<<"\nChoose The Series That You Search For :\t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
{ found=false;
    if(name==series[i].name)
    {
     cout<<"\n==================================================================================================\n";
        cout<<"\nThe Seies That You Choosed is :\t";
        cout<<series[i].name<<endl;
        
        cout<<"\nThe Rate Of The Series :"<<series[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Seies Name That You Search For Is Not Exists."<<endl;
break;

}
}
cout<<"\nWould Yo Search Again ? ( Press Positive Number if Yes):\t";
cin>>trying3;
}while(trying3>0);
  
}

void suggestionB(char ch)
{
    char choice;
    do{
    
    cout<<"1.Horror\n2.Philosophy\n3.Historical\n4.Self-development\n\nWhat Do You Prefer ?\t";
    cin>>choice;
      if(choice=='1'){
    
 cout<<"\n==================================================================================================\n";
    cout<<"Books Names That We Suggest For You :\n"<<endl;
for(int i=0;i<1;i++)
{
cout<<book1.name<<endl;
cout<<book2.name<<endl;
cout<<book3.name<<endl;
cout<<book4.name<<endl;
cout<<book5.name<<endl;
}
cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";

    cout<<"\nChoose The Book That You Search For :\t";
   string name;
  getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
{ found=false;
    if(name==book[i].name)
    {
      cout<<"\n==================================================================================================\n";
        cout<<"\nThe Book That You Choosed is :\t";
        cout<<book[i].name<<endl;
        
        cout<<"\nThe Rate Of The Book :"<<book[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Book Name That You Search For Is Not Exists."<<endl;
break;

}
}

else if (choice=='2')
{
 cout<<"\n==================================================================================================\n";
    cout<<"Books Names That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<book6.name<<endl;
        cout<<book7.name<<endl;
        cout<<book8.name<<endl;
        cout<<book9.name<<endl;
        cout<<book10.name<<endl;
    }
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
        cout<<"\nChoose The Book That You Search For :\t";
   string name;
  getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
{ found=false;
    if(name==book[i].name)
    {
        cout<<"\n==================================================================================================\n";
        cout<<"\nThe Book That You Choosed is :\t";
        cout<<book[i].name<<endl;
        
        cout<<"T\nhe Rate Of The Book :"<<book[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Book Name That You Search For Is Not Exists."<<endl;
break;

}
}

else if (choice=='3')
{
 cout<<"\n==================================================================================================\n";
    cout<<"Books Names That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<book11.name<<endl;
        cout<<book12.name<<endl;
        cout<<book13.name<<endl;
        cout<<book14.name<<endl;
        cout<<book15.name<<endl;
    }
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
        cout<<"\nChoose The Book That You Search For :\t";
   string name;
 getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
{ found=false;
    if(name==book[i].name)
    {
     cout<<"\n==================================================================================================\n";
        cout<<"\nThe Book That You Choosed is :\t";
        cout<<book[i].name<<endl;
        
        cout<<"\nThe Rate Of The Book :"<<book[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Book Name That You Search For Is Not Exists."<<endl;
break;

}
}
else if (choice=='4')
{
     cout<<"\n==================================================================================================\n";
    cout<<"Books Names That We Suggest For You :\n"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<book16.name<<endl;
        cout<<book17.name<<endl;
        cout<<book18.name<<endl;
        cout<<book19.name<<endl;
        cout<<book20.name<<endl;
    }
    cout<<"\nNote: Please Be Aware Of The Captial And Small Letters.\n";
        cout<<"\nChoose The Book That You Search For :\t";
  string name;
  getline(cin >> ws, name);
 cout<<"\n==================================================================================================\n";
for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
{ found=false;
    if(name==book[i].name)
    {
         cout<<"\n==================================================================================================\n";
        cout<<"\nThe Book That You Choosed is :\t";
        cout<<book[i].name<<endl;
        
        cout<<"The Rate Of The Book :"<<book[i].rate<<endl;
        found=true;
        break;
    }
}
if(!found){

cout<<"\nSorry, The Book Name That You Search For Is Not Exists."<<endl;
break;

}
    cout<<"\nWould You Search Again ( Press Positive Number If Yes):\t";
    cin>>trying4;
}
}while(trying4>0);
cout<<endl;
    
}




// Adding new rate Section

double SertchM(string M){
    double rate = 0.0;
    for(int i=0;i<sizeof(movie)/sizeof(movie[0]);i++)
    {  found=false;
        if(M==movie[i].name)
        {
            rate=movie[i].rate;
             found=true;
             cout<<"The Rate Of The Movie Is :\t"<<rate<<endl;
             break;
            
        }

            }
            if(!found){
            
            cout<<"\nSorry, The Movie Name That You Search For Is Not Exists."<<endl;}

    return rate;
}

double SertchS(string S){
    double rate = 0.0;
    for(int i=0;i<sizeof(series)/sizeof(series[0]);i++)
    { found=false;
        if(S==series[i].name)
        {
           rate= series[i].rate;
            found=true;
            cout<<"The Rate Of The Movie Is :\t"<<rate<<endl;
            break;
        }
   
    
        
    }
     if(!found){

    cout<<"\nSorry, The Seies Name That You Search For Is Not Exists."<<endl;
}
    
    return rate;
    }


double SertchB(string B){
    double rate=0.0;
    for(int i=0;i<sizeof(book)/sizeof(book[0]);i++)
    { found=false;
        if(B==book[i].name)
        {
            rate=book[i].rate;
            found=true;
            cout<<"The Rate Of The Book : \t"<<rate<<endl;
            break;
        }
   
}

 if(!found){

    cout<<"\nSorry, The Book Name That You Search For Is Not Exists."<<endl;

    }
    return rate;
}
double NewRate(double &PR,double &R){
    return (PR+R)/2;
}



// Adding Suggestion Section


void SuggestionMM(Movie *movie1)
{
        cout<<"Example:"<<endl;
        cout<<endl;
        cout<<"Enter The Movie: IT "<<endl;
        cout<<"Enter The Category: Action "<<endl;
        cout<<"Enter The Actor Of The Movie: Saja"<<endl;
        cout<<"Enter The Rate Of The Movie: 5.7 "<<endl;
    cout<<"Enter The Price Of The Movie: 25  "<<endl;
        
        indx++;
         cout<<"\n==================================================================================================\n";
        cout<<"\n-  Enter The Movie:\t";
            getline(cin >> ws,movie1[indx].name);
        cout<<"\n-  The Category Of The Movie: \t";
            getline(cin >> ws,movie1[indx].category);
        cout<<"\n-  The Actor Of The Movie: \t";
           getline(cin >> ws, movie1[indx].actor);
        cout<<"\n-  The Rate Of The Movie: \t";
        cin>>movie1[indx].rate;
        cout<<"\n- The Price Of The Movie: \t";
        cin>>movie1[indx].praice;
       
    }

    void SuggestionSS(Series *series1){
            cout<<"Example:"<<endl;
            cout<<endl;
        cout<<"Enter The Series: The Originals "<<endl;
        cout<<"Enter The Category: Horror "<<endl;
        cout<<"Enter The Actor Of The Series: Danah"<<endl;
        cout<<"Enter The Rate Of The Series: 5.7 "<<endl;
    cout<<"Enter The Price Of The Series: 25  "<<endl;
        
        indx++;
        cout<<"\n==================================================================================================\n";
        cout<<"\n-  Enter The Series:\t";
            getline(cin >> ws,series1[indx].name);
        cout<<"\n-  The Category Of The Series:\t ";
            getline(cin >> ws, series1[indx].category);
        cout<<"\n-  The Actor Of The Series: \t";
            getline(cin >> ws, series1[indx].actor);
        cout<<"\n-  The Rate Of The Series: \t";
        cin>>series1[indx].rate;
        cout<<"\n-  The Price Of The Series: \t";
        cin>>series1[indx].praice;
      
      
    }
    void SuggestionBB(Book *book1){
        cout<<"Example:"<<endl;
        cout<<endl;
        cout<<"Enter The Book: Trust and inspire "<<endl;
        cout<<"Enter The Category: Self- Development "<<endl;
        cout<<"Enter The Author Of The Book: maab"<<endl;
        cout<<"Enter The Rate Of The Book: 5.7 "<<endl;
    cout<<"Enter The Price Of The Book: 25  "<<endl;
        
    indx++;
   cout<<"\n==================================================================================================\n";
    cout<<"\n-  Enter The book:\t";
       getline(cin >> ws, book1[indx].name);
    cout<<"\n-  The Category Of The Book:\t ";
        getline(cin >> ws,book1[indx].category);
    cout<<"\n-  The Author Of The Book:\t ";
        getline(cin >> ws,book1[indx].author);
    cout<<"\n-  The Rate Of The Book: \t";
    cin>>book1[indx].rate;
    cout<<"\n-  The Price Of The Book: \t";
    cin>>book1[indx].praice;
    
}
