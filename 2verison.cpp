#include <iostream> 
#include <iomanip>

using namespace std; 


struct student{
    string name;
    double test[10];
    double ave;
};
int main(){
    double sum;
    int i=0,f=0,j=0,h=0;
    int studentNumber;
    int numberOfTests[10];
    //output variables 
    int a=0,b=0,c=0;
    
    cout<<"-----------------------------------------------\n";
    cout <<"The program can  only use for 1-10 students\n";
    cout<<"-----------------------------------------------\n";
    cout<<"How many students u want to store?\n";
    cin>>studentNumber;


    student *std=new student[studentNumber];
    cout<<"Please Enter the students Name and its grades\n";
    
    for(j=0; j<studentNumber; j++ ){
        cout<<"Please Enter the Name of Student Number: "<<1+j<<endl;
        cin>>std[j].name;
        cout<<"How many tests that student have\n"; 
        cin>>f;
        numberOfTests[j]=f;
        for(h=0; h<f; h++){
            cout<<"Please Enter your value of Test number: "<<h+1<<endl;
            cin>>std[j].test[h];
            sum+=std[j].test[h];
        }
        std[j].ave=sum/numberOfTests[j];
        h=0;
        sum=0;
    }
    
    //The loop will give the outPut foir the students 
    //The program will print the students name and its grades. 
    for(a=0; a<studentNumber; a++){
        cout<<a+1<<"-"<<std[a].name<<setw(7);
        c=numberOfTests[a];
        for(b=0; b<c; b++){
            cout<<"Test"<<b+1<<":"<<setw(3)<<std[a].test[b]<<setw(12);
        }
        cout<<"Average: "<<std[a].ave<<endl;
        b=0;
    }

    
}
