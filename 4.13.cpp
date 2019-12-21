							//Program 4.13



#include<iostream>
using namespace std;
int main()
{
	float kilometers,Liters,KMS_per,Total_KMS;
	int n=1;
	while(kilometers!=-1)
	{
		cout<<"Enter Kilometers Driven(-1 to quit):";
		cin>>kilometers;
		if(kilometers!=-1)
		{
		cout<<"Enter Liters used:";
		cin>>Liters;
		KMS_per=kilometers/Liters;
		cout<<"KMS per liter this trip:"<<KMS_per<<endl;
		Total_KMS=(Total_KMS+KMS_per)/n;
		cout<<"Total KMS per liter:"<<Total_KMS;
		n++;
		cout<<"\n\n";
	    }
	}
	return 0;
}
