#include <iostream>
using namespace std;

int main()
{
    int arr[100] ,num ,even= 0  ,odd = 0 ;
   
    cout<<"How many numbers do you want to enter? ";
    cin>>num;
    cout<<"\nInput " <<num <<" numbers. \n";
    cout<<"==========================================" <<endl;
    
	for(int i=0; i<num; i++)
	{
        cout<<i+1 << ": ";
		cin>>arr[i];
    }
    for(int i=0; i<num; i++)//added. para malaman kung ilan value ng even odd
    //new nag alis ako =
    {   
        if (arr[i]%2==0)
		{
			even++;
        }
    	if (arr[i]%2==1)
		{
			odd++;
        }
	}
    cout<<"\nYou have entered " << even << " ODD number:"  <<endl;
    for(int i=0; i<num; i++)
    {
    	if (arr[i]%2==1)
		{
			cout<< arr[i]<<"\n";
        }
	}
	
    cout<<"\nYou have entered " << even <<" EVEN number:" <<endl;
	for(int i=0; i<num; i++)// nag add ako ng = sa <=
	// inalis ko ulit
	{
		if(arr[i]%2==0)
		{
            cout<<arr[i]<<"\n";
    	}	
	}
	
    int small, big;
	big = small = arr[0];
	
    for (int i = 0; i < num; i++) 
    {
        if(arr[i] > big) 
        {
            big = arr[i];
        }
    }
    
    for (int i = 0; i < num; i++) 
    {
        if (arr[i] < small) 
        {
            small = arr[i];
        }
    }
    
    cout << "\nThe LARGEST number you entered is: " << big << endl; 
    cout << "\nThe SMALLEST number you entered is: " << small << endl;
    
return 0;
}
