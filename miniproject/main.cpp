#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<stdlib.h>

using namespace std;

int cnt=0;
int isbuy=0; 
int r=0;
float res=0;
int item_id[10]={0};
string item_name[10];
int  item_price[10]={0};
int  item_disc[10]={0};
int  purchased=0;
string uname,pss;



void display_item();
void signup();
void signin();
void display();
void select();
void display_menu();
void contact_us();
void exit();
int show_cart(int,int);
int  cart(int );
int confirm_purchase(int);



struct data
{
   int id,price,disc;
   string s1;

} * x;



 int main()
{
   system("clear");
   
   if(cnt==0) display();
   else display_menu();
    
}


void display()
{
     system("clear");
    cout<<"            ****************************************"<<"\n";
    cout<<"                        -ZODIAC-   SHOES            "<<"\n";
    cout<<"            ****************************************"<<"\n";
    cout<<"\n";   
    cout<<"************   HOME  ****************"<<"\n";
    cout<<"*                                   *"<<"\n";
    cout<<"*     1. Display Menu               *"<<"\n";
    cout<<"*     2. Signup                     *"<<"\n";
    cout<<"*     3. Sign In                    *"<<"\n";
    cout<<"*     4. Contact Us                 *"<<"\n";
    cout<<"*************************************"<<"\n";
    cout<<"\n";
    select();
}


void select()

{
  
    int  opt=0;
   cout<<" CHOOSE OPTION:";
   cin.clear();
   fflush(stdin);
   cin>>opt;
  
   if(opt==1)
   {
       display_menu();
   }
   if(opt==2)
   {
       signup();
   }
   if(opt==3)
   {
       signin();
   }
   if(opt==4)
   {
       contact_us();
   }
}



void signup()
{
    system("clear");
    cout<<"            ****************************************"<<"\n";
    cout<<"                        -ZODIAC-   SHOES       i     "<<"\n";
    cout<<"            ****************************************"<<"\n";
    cout<<"\n";   
    cout<<"***************************"<<"\n";
    cout<<"          SIGNUP           "<<"\n";
    cout<<"***************************"<<"\n";
    string addr,mobno,email,pass;
    string name,s1;
    cin.clear();
   fflush(stdin); 
    cout<<" ENTER USER NAME:       "; 
     
    getline(cin,name);
   

    cout<<" ENTER ADDRESS:         "; 
    getline(cin,addr);
 
    
    cout<<" ENTER MOBILE NUMBER:   ";
    getline(cin,mobno);
 
    
    cout<<" ENTER EMAIL:           "; 
    getline(cin,email);

    
    cout<<" ENTER PASSWORD         "; 
    getline(cin,pass);

     
    ofstream reg("file1.txt",ios::out | ios::app);
    reg<<name<<" "<<pass<<"\n";
    reg.close();
    cout<<"\n";
    cout<<" \tSIGNUP SUCCESSFULL!!!  "<<"\n";
    cout<<" \tPRESS ANY KEY TO CONTINUE....."<<"\n";
    system("read");
   
      main();


}

void signin()

{
    system("clear");
    cout<<"            ****************************************"<<"\n";
    cout<<"                        -ZODIAC-   SHOES            "<<"\n";
    cout<<"            ****************************************"<<"\n";
    cout<<"\n";   
    //int count=0;
   
    string u,p;

    cout<<"***********************"<<"\n";
    cout<<"         LOGIN         "<<"\n";
    cout<<"***********************"<<"\n";
   
    cout<<"USERNAME  ";
    cin.ignore();
    getline(cin,uname);
  
    cout<<"PASSWORD  ";
    getline(cin,pss);


    ifstream in("file1.txt");
    while (in>>u>>p)
    {
        if(u==uname && p==pss)
        {
            cnt = 1;
            
           
        }
 
    }
    if(cnt==1)
    { 
           cout<<"LOGED IN SUCCESSFULLY!!!!!! "<<"\n";
           cout<<"PRESS ANY KEY TO CONTINUE......"<<"\n";
           
           system("read"); 
         main();
    }
    else 
        {
          cout<<" \tWRONG PASSWORD OR USERNAME   "<<"\n";
          cout<<"  \tPRESS ENTER TO TRY AGAIN!    "<<"\n";
          system("read");
          display();
        }
 
        in.close();


    } 



void display_menu()

{
          system("clear");
    cout<<"            ****************************************"<<"\n";
    cout<<"                        -ZODIAC-   SHOES            "<<"\n";
    cout<<"            ****************************************"<<"\n";
    cout<<"\n";   
    cout<<"\n";

    cout<<"===============================================\n";
    cout<<"=                                             =\n";
    cout<<"=      1.DISPLAY ITEMS         2.SIGNOUT      =\n";
    cout<<"=      3.CART                  4.CONTACT US   =\n";
    cout<<"=      5.EXIT                                 =\n";
    cout<<"===============================================\n";
    cout<<"\n";
     cout<<" WELCOME  "<<uname<<"\n";
    int sel_fun=0;
    cout<<" CHOOSE OPTION :: ";
    cin>>sel_fun;

    if(sel_fun==1)
        display_item();
    if(sel_fun==2)
    {
        cnt=0;
        cout<<" YOU ARE SUCCESSFULLY SIGNED OUT \n";
        cout<<" PRESS ENTER TO GO BACK TO THE MAIN MENU \n";
        system("read");
        main();
    }
    if(sel_fun==3)
       show_cart(isbuy,res);
    if(sel_fun==4)
        contact_us();
    if(sel_fun==5)
        exit();

}

void contact_us()
{
    system("clear");
   cout<<"***********************************************\n";
   cout<<"*             CONTACT US                      *\n";
   cout<<"*      Call us :-   1800-3245-8562            *\n";
   cout<<"*      Gmail   :-   zodiac@gmail.com          *\n";
   cout<<"*      Address :-   CHANDGARH SEC-7           *\n";
   cout<<"*                   SCO-1347/420              *\n";
   cout<<"***********************************************\n";
   cout<<"\n";
   cout<<" PRESS ENTER TO GO BACK TO MAIN MENU   \n";
   system("read");
   main();

}





int show_cart(int isbuy,int res)

{
    int is_edit = 0;
      if(isbuy==1)
      {

           system("clear");
           cout<<"\n";
            cout<<" \tYOUR  CART \n";
            cout<<"\t===============================================\n";
            cout<<"\t ID  \t ITEM NAME \t\tPRICE\tDISCOUNT \n";
            for(int j=0;j<r;j++)
            {
                if(item_id[j]!=0 )
                cout<<"\t "<<item_id[j]<<"\t"<<item_name[j]<<"\t"<<item_price[j]<<"\t"<<item_disc[j]<<"\n";
            
            }
            cout<<"\t===============================================\n";
                
       cout<<"\n";
          cout<<"\tTOTAL BILL :: "<<res<<"\n";
           cout<<"\n";
           cout<<"\n";  
    cout<<"=====================================\n";
    cout<<"*     1.REMOVE ELEMENTS FROM CART   *\n";
    cout<<"*     2.CONFIRM PURCHASE            *\n";
    cout<<"*     3.EXIT                        *\n";
    cout<<"=====================================\n";
    
    cout<<"\n";
           
     cout<<" YOUR OPTION :: ";
     cin>>is_edit;
     
     if(is_edit==1)  
           cart(res);
     if(is_edit==2)
           confirm_purchase(res);
     if(is_edit==3)
           exit();  

      }
      

     else 
     {
         cout<<" NOTHING TO SHOW IN CART\n";
         cout<<" PRESS  ENTER TO SHOP \n";
         system("read");
         display_item(); 
          
     
     }

}

int confirm_purchase(int res)

{
    cout<<" YOUR TOTAL BILL IS :: "<<res<<"\n";
     res=0; 
     purchased=1;
    isbuy=0;

    int item_id[10]={0};
    string item_name[10];
    int  item_price[10]={0};
    int  item_disc[10]={0};
    r=0; 
  
    cout<<" ------THANKYOU FOR SHOPPING WITH US---- \n";
    cout<<" PRESS ENTER TO CONTINUE\n ";
    system("read");
    
   
    display_menu();

}

void exit()
{
   
    cout<<" HOPE YOU HAD A GREAT TIME \n";
    cout<<" -----HAVE A GOOD DAY------\n";

}



void display_item()

{
    system("clear");
    cout<<"            ****************************************"<<"\n";
    cout<<"                        -ZODIAC-   SHOES            "<<"\n";
    cout<<"            ****************************************"<<"\n";
    cout<<"\n";   
     cout<<"\n";
    
    x= new struct data[10];
   
   int i=0;
   cout<<"ID \t PRODUCT \t \t \tPRICE\t\tDISCOUNT "<<"\n";

   cout<<"================================================================\n";
   ifstream reg("item.txt",ios::in);
   for(i=1;i<=10;i++)
   {
   
      reg>>x[i].id>>x[i].s1>>x[i].price>>x[i].disc;
      cout<<x[i].id<<"\t"<<x[i].s1<<"\t\t"<<"$"<<x[i].price<<"\t \t"<<x[i].disc<<"%\n";
   
   }
      
   
reg.close();
cout<<"===============================================================\n";
cout<<"\n";
cout<<"\n";

int k=2;

float p=0;
int h=0;

if(purchased==1)
     res=0;


if(cnt==1)
{
    


  while(k>=1 && k<=10)
   {         

   cout<<"Enter ID to add to the cart / 0 to go back  :: \t";
   cin>>k;

       if(k>=1 && k<=10)
        {
              item_id[r] = x[k].id;
              item_name[r] = x[k].s1; 
              item_price[r] = x[k].price;
              item_disc[r] = x[k].disc;
              r++;
        }




      if(k==0)
         {
            
            cout<<"\n";
            break;
           
         }
      else
         {
          isbuy=1;  h=1;
            p=x[k].price - (x[k].price * x[k].disc)/100;
            res=res+p;
         }


    }
        
   display_menu();       

         
}

else 
{
    cout<<" * YOU ARE NOT SIGNED IN PLEASE SIGN IN TO CONTINUE SHOPPING * \n";
    cout<<" PRESS ANY KEY TO CONTINUE \n";
    system("read");
    main();
}


}

int  cart(int res)
{
    char rem;
    int is_change=0;
    int cart_id=0;
    float bill=0;
    do
    {
    cout<<" > DO YOU WANT TO REMOVE ANY ITEM (Y/N) :: \n";
    cin>>rem;


    if(rem=='Y' | rem=='y')
    { 
        is_change=1;
        cout<<"  ENTER THE ID OF THE ITEM WHICH YOU WANT TO REMOVE :: \n";
        cin>>cart_id;
         
         for(int i=0;i<r;i++)
         {
             if(item_id[i]==cart_id)
             {
                 item_id[i]=0; item_name[i]='0'; item_price[i]=0; item_disc[i]=0;
             }
            

         }
                    

               bill=x[cart_id].price - (x[cart_id].price * x[cart_id].disc)/100;
               res=res-bill;
    }
        else break;
    }while( rem=='y' || rem=='Y');

if(is_change==1)
{
    show_cart(isbuy,res);
}

cout<<" FINAL BILL :: "<<res;

}





