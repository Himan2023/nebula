#include<bits/stdc++.h>
using namespace std;
int main(){
    int key;
cout<<"************* security system **************";
cout<<endl<<endl;
cout<<endl;
cout<<"-------------------------------\n";
cout<<"_________1] Register___________\n";
cout<<"_________2] Login______________\n";
cout<<"_________3]Change password_____\n";
cout<<"_________4]End programe________\n";
cout<<"-------------------------------\n";
cout<<endl<<endl<<endl;
cout<<"make sure that you register first"<<endl<<endl;
string word,word1,word2,text1,text2,text,name,name1,pass1,pass2,epass,sec,sec1,newpass,newpass1;int age,age1,choice;
 ofstream of1,of2,of3;ifstream if1,if2,if3; string creed[3];int i=0;
 while(1){
cout<<endl<<"please enter your choice : ";
cin>>key;cin.ignore();
if((key==1)||(key==2)||(key==3)){
 switch (key)
 {
 case 1:

       cout<<"  REGISTER  "<<endl<<endl;
        cout<<"NAME: ";
        getline(cin,name);
        cout<<"AGE:";cin>>age;cin.ignore();
        cout<<"PASSWORD :";getline(cin,pass1);
        cout<<"CONFIRM PASSWORD :";getline(cin,pass2);
        cout<<endl<<endl;
        while(1){
            if(pass1==pass2){
                break;  }
            else  
            { cout<<"///////////////////////////////"<<endl;
              cout<<"please enter the valid password"<<endl;
            cout<<"PASSWORD :";cin>>pass1;
        cout<<"CONFIRM PASSWORD :";cin>>pass2;  }
             }
             cout<<endl<<endl<<endl;
             cout<<"plese select one of the security question :-"<<endl;
             cout<<"\n1] your first crush name :"<<endl;
             cout<<"2] your favorite movie : "<<endl;
             cout<<"3] your first school name :"<<endl;
             cout<<"4] your hobby :"<<endl<<endl<<endl;
             cout<<"Enter your choice here : ";cin>>choice;cin.ignore();
        while(1){
                if((choice==1)||(choice==2)||(choice==3 )||(choice==4)){
             switch (choice)
             {
             case 1:
                cout<<"\n your first crush name : ";getline(cin,sec);
                break;
            case 2:
                cout<<"your favorite movie : ";getline(cin,sec);
                    break;
                     
            case 3:
                cout<<"your first school name : ";getline(cin,sec);
                    break;
            case 4:
            cout<<"your hobby : ";getline(cin,sec);
                    break;
             
             }
             break;
                }
                else{
                    cout<<"\nplease enter the valid choice"<<endl;
                }
             }
             word=name+pass1+".txt";
            word1=pass1+name+".txt";
            word2=to_string(age)+".txt";
             of1.open(word);
            if(of1.is_open()){
                of1<<name<<endl;
                cout<<"\nname saved"<<endl;} 
             
             of2.open(word1);
            if(of2.is_open()){
                of2<<pass1<<endl;
                cout<<"\npassword saved"<<endl;
                 } 
             
             of3.open(word2);
            if(of3.is_open()){
                of3<<choice<<endl;
                 cout<<"\n \n ********THANK YOU*********";
             cout<<"\nYour registration is successful"<<endl;} 
             
            
    break;

case 2:
   cout<<"\n\n       LOGIN   "<<endl<<endl;
   cout<<" kindly enter your login details "<<endl<<endl;
   cout<<"Name : ";getline(cin,name1);
   cout<<"Age : ";cin>>age1;cin.ignore();
   cout<<"Password : ";getline(cin,epass);
            word=name+epass+".txt";
            word1=epass+name+".txt";
      if1.open(word);
        while(getline(if1,text)){
            if1>>text;
            creed[0]=text;
        }

         if2.open(word1);
        while(getline(if2,text1)){
            if2>>text1;
            creed[1]=text1;
        }

        if((name1==creed[0]) && (epass==creed[1])){
            cout<<"\n\n\n\nlogin successfull"<<endl<<endl;
        }
        else{
            cout<<"\n\n\n***** login details are invalid ******* "<<endl;
            cout<<"\n click 2 to  login again"<<endl;
            cout<<"         or"<<endl;
            cout<<" click 3 to change the password"<<endl;
            cout<<"\n and also make sure that you had register before "<<endl<<endl;
            break;

        }
    
   
   break;
   case 3:
       cout<<" CHANGE PASSWORD "<<endl<<endl;
        cout<<"please enter the old password if you could remeber ";
        getline(cin,newpass);
        cout<<"\nenter age : ";
        cin>>age1;cin.ignore();
        if2.open(word1);
        while(getline(if2,text1)){
            if2>>text1;
            creed[1]=text1;
        }

        if(newpass==creed[1]){
            cout<<" enter the new password : ";
            getline(cin,newpass1);
            pass1=newpass;
            of2.open(word1);
            if(of2.is_open()){
                
                of2<<pass1<<endl;}
                cout<<"\n\npassword change succesfull"<<endl  ;

        }else{
            word2=to_string(age1)+".txt";
            cout<<"\n******* sorry incorrect password ***********"<<endl;
            cout<<"\nyour security question was :"<<endl<<endl<<endl;
            if3.open(word2);
        while(getline(if3,text2)){
            if3>>text2;
            creed[2]=text2;
        }
        int choka=stoi(creed[2]);
            
            switch (choka)
             {
             case 1:
                cout<<"\n your first crush name : ";getline(cin,sec1);
                break;
            case 2:
                cout<<"your favorite movie : ";getline(cin,sec1);
                    break;
                     
            case 3:
                cout<<"your first school name : ";getline(cin,sec1);
                    break;
            case 4:
            cout<<"your hobby : ";getline(cin,sec1);
            break;

             default:
             cout<<"please enter the valid choices";
                break;
             }if(sec==sec1){
                cout<<" enter the new password : ";
            getline(cin,newpass1);
            pass1=newpass;
            of2.open("myfiley1.txt");
            if(of2.is_open()){
                
                of2<<pass1<<endl;}
                cout<<"\n\npassword change succesfull"<<endl  ;
             }
             else{
                cout<<"\nwrong answer try login again"<<endl;
             }

             

        }
      break;



 
 default:
 cout<<"\nplease enter the valid number "<<endl;
    break;
 }
}
else if(key==4){
    cout<<"******* programe ends *********"<<endl;
    cout<<"    thank you    ";
    break;}


   else{ cout<<"plese enter the valid number"<<endl;}
      
 }
 return 0;
}
