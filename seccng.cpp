#include<iostream>
#include<vector>
using namespace std;


void print(int ActualArray[], size_t Array_Size);
void applyAll(int array1[], size_t size1, int array2[], size_t size2);


void print(int ActualArray[], size_t Array_Size){
	for (int i = 0; i < Array_Size; ++i)
	{
		cout<<ActualArray[i];
		cout<<",";
	}

}

void applyAll(int array1[], size_t size1, int array2[], size_t size2){
	cout<<" Result Array is : ";
	for (int index = 0; index < size1; ++index)
	{
		for (int index2 = 0; index2 < size2; ++index2)
		{
			cout<<array1[index]*array2[index2];
			cout<<",";
		}
	}
	//return 0;

}



int main(int argc, char const *argv[])
{
	//vector<int> vector1;
	// int *vectpointer1{nullptr};
	// int size{};
	// cout<<"Enter size of first array ";
	// cin>>size;
	// vectpointer1 = new int[size];  
	// //vector<int> vector2;
	// int *vectpointer2{nullptr};
	// int size2{};
	// cout<<"Enter size of second array ";
	// cin>>size2;
	// vectpointer1 = new int[size2];

	const size_t array1Size{5};
	const size_t array2Size{3};

	int array1[]{1,2,3,4,5};
	int array2[]{10,20,30};

	cout<<"Array 1: ";
	print(array1, array1Size);
	cout<<"\n"<<endl;

	cout<<"Array 2: ";
	print(array2, array2Size);
	cout<<"\n"<<endl;

	applyAll(array1,array1Size,array2,array2Size);

	//constexpr size_t resultSize{array1Size*array2Size};	

	return 0;
}