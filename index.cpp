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
    cout<<"Please enter the testscore\n";
    while(j<studentNumber){
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
    }
    cout<<"#N/A not Include in the average. \n";
    cout<<"Name"<<setw(15)<<"test1"<<setw(10)<<"Test2"<<setw(10)<<"Test3"<<setw(10)<<"Test4"<<setw(10)<<"Test5"<<setw(10)<<"Test6"<<setw(10)<<"Test7"<<setw(10)<<"Test8"<<setw(10)<<"Test9"<<setw(10)<<"Test10"<<setw(10)<<"Average"<<endl;
    for(a=0; a<studentNumber; a++){
        cout<<std[a].name<<setw(10);
        c=numberOfTests[a];
        for(b=0; b<c; b++){
            cout<<std[a].test[b]<<setw(10);
        }
        for(int m=0; m<10-c; m++){
            cout<<"N/A"<<setw(10);
        }
        cout<<std[a].ave<<endl;
        b=0;
    }

    
}
