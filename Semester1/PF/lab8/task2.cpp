#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int responseSize=99;
int arrResponse[responseSize];
double arrayMed(int arr[],int);
double arrayMean(int arr[],int size);
int arrayMode(int arr[],int size);
int Bubble(int arrResponse[],int size);
int arrayPRINT(int arr[],int size);
int arrFill(int);
int main()
{   int userOpt;
    arrFill(responseSize);
    cout<<"\nSelect an Option.\n(1)Mean \n(2)Median \n(3)Mode of the Array\n";
    cin>>userOpt;
    if(userOpt==1)
    {cout<<"\nMean of Array is: "<<arrayMean(arrResponse,responseSize);}
    else if(userOpt==2)
    {cout<<"\nMedian of Array is: "<<arrayMed(arrResponse,responseSize);}
    else if(userOpt==3)
    {cout<<"\nMode of Array is "<<arrayMode(arrResponse,responseSize);  } }
int arrayMode(int a[],int size)
{   int temp=0,Mode=0,bigger;
    int frequency[9];
    for(int i=0;i<9;i++)
    frequency[i]=0;    
    for(int j=0;j<size;j++)
    {   temp=a[j];
        switch (temp)   {
        case 1 :{
            frequency[0]+=1;
            break;}
        case 2 :{
            frequency[1]+=1;
            break;}
        case 3 :{
            frequency[2]+=1;
            break;}
        case 4 :{
            frequency[3]+=1;
            break;}
        case 5 :{
            frequency[4]+=1;
            break;}
        case 6 :{
            frequency[5]+=1;
            break;}
        case 7 :{
            frequency[6]+=1;
            break;}
        case 8 :{
            frequency[7]+=1;
            break;}
        case 9 :{
            frequency[8]+=1;
            break;} }   }
    cout<<"\n\t|1|\t|2|\t|3|\t|4|\t|5|\t|6|\t|7|\t|8|\t|9|\t\n"<<
    "\t "<<frequency[0]<<"\t"<<frequency[1]<<"\t"<<frequency[2]<<"\t"<<frequency[3]<<
    "\t"<<frequency[4]<<"\t"<<frequency[5]<<"\t"<<frequency[6]<<"\t"<<frequency[7]<<
    "\t"<<frequency[8]<<"\n";
    for (int k = 0;k<9;k++)
    if (Mode<frequency[k])
    Mode=frequency[k];
return Mode;    }
int arrFill(int size)
{   srand(time(0));
    for (int i=0; i<size;i++) 
            arrResponse[i]= rand()%9 + 1;
    return Bubble(arrResponse,size); }
int arrayPRINT(int a[],int size){
for(int i=0;i<size;i++){
      cout<<" "<<a[i]<<" ";    }
return 0;}
double arrayMean(int a[],int size)
{   double sum=0;
    for(int i=0;i<size;i++)
        sum=sum + a[i];
    return sum/(double)size; }
double arrayMed(int arrResponse[] , int responseSize)
{   int i=0,Odd,avg, Even = responseSize % 2; 
    cout<<"\nThe Median of Array is: ";
    if(Even == 0)
        {   i = responseSize / 2;
            double median=( arrResponse[i]+arrResponse[i+1] )/2;
            return median;    }
    else {Odd = responseSize/2;
    avg = arrResponse[Odd];} 
    return avg; }
int Bubble(int arrResponse[],int size)
{   int temp=0;
    for(int i=0;i<size;i++)
    {   for(int j=i+1;j<size;j++) {
        if(arrResponse[j] < arrResponse[i])
        {temp = arrResponse[i];
        arrResponse[i] = arrResponse [j];
        arrResponse[j]=temp;}   }   }
return arrayPRINT(arrResponse,size);    }