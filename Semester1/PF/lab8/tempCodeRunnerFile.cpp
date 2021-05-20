#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int arrayMIN(int a[3][4],int);
int arrayMAX(int a[3][4],int);
double arrayAVG(int a[3][4],int);
int arrayPRINT(int a[3][4]); //prints the array
int arrayRAND(int a[3][4]); //assigns random values in the array
int arrayUSER(int a[3][4]);
int main()
{   int arrayStd[3][4],userOpt,userOpt2,userOpt3;
    cout<<"Press 1 to Enter Values in Array. Press 0 for random values."<<endl;
    cin>>userOpt;
    if(userOpt==0) cout<<"The Values are \n"<<arrayRAND(arrayStd)<<"\t";
    else if (userOpt==1) arrayUSER(arrayStd);
    else {cout<<"Invalid Selection"<<endl;
    return 0;}
    cout<<"\nSelect an Operation\n"
    <<"(1)\tMINIMUM Marks from 4 Exams:\n"
    <<"(2)\tMAXIMUM Marks from 4 Exams:\n"
    <<"(3)\tAVERAGE Marks of Semester:\n"
    <<"Select Option Number: ";
    cin>>userOpt3;
    cout<<"Select a Student: \n(1) Student 1 \n"
    "(2) Student 2 \n(3) Student 3\n";
    cin>>userOpt2;
    if(userOpt2>3)cout<<"\nWrong Option Selected.";
    else{
    if (userOpt3==1){
        cout<<"\nMinimum is "<<arrayMIN(arrayStd,userOpt2); }
    else if(userOpt3==2){
        cout<<"\nMaximum is "<<arrayMAX(arrayStd,userOpt2); }
    else if(userOpt3==3){
        cout<<"\nAverage is "<<arrayAVG(arrayStd,userOpt2); }
    else cout<<"\nYou have entered Invalid Option.";    }   }
int arrayRAND(int a[3][4])
{   int randomNum;
    srand(time(0));
    for (int i=0; i<3;i++)
            for(int j=0;j<4;j++) 
            a[i][j]= rand()%100 + 1;
    return arrayPRINT(a);   }
int arrayPRINT(int a[3][4]){
    cout<<"\n   \tStudents\tExam-1\t\tExam-2\t\tExam-3\t\tExam-4";
for(int i=0;i<3;i++){
    cout<<"\nStudent "<<i+1<<" Marks are: ";
    for(int j=0 ; j<4 ;j++)
        cout<<"|\t"<<a[i][j]<<"\t|";    }
return 0;   }
int arrayUSER(int a[3][4])
{   cout<<"\nEnter numbers to put in array";
    for(int i=0;i<3;i++)
    {cout<<"\nStudent "<<i+1<<":\n";
        for(int j=0;j<4;j++)
        {   cout<<"Exam-"<<j+1<<": ";
            cin>>a[i][j]; } }
return arrayPRINT(a);   }
int arrayMIN(int a[3][4],int userChoice)
{   int i = userChoice - 1;
    int minNum=a[i][0];
{   for(int j=0;j<4;j++)
    {   if (minNum>a[i][j])
            minNum=a[i][j]; }
    return minNum;}   }
int arrayMAX(int a[3][4],int userChoice)
{   int i = userChoice - 1;
    int maxNum=a[i][0];
{   for(int j=0;j<4;j++)
    {   if (maxNum<a[i][j])
            maxNum=a[i][j]; }
    return maxNum; }}
double arrayAVG(int a[3][4],int userChoice)
{   int i = userChoice - 1;
    int sum=0;
    for(int j=0;j<4;j++)
        sum=sum + a[i][j];
    return sum/4; }