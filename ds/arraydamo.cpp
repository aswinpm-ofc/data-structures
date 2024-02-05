#include "Array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(3);
	myArray.insert_at_end(5);
	myArray.insert_at_end(6);
	myArray.insert_at_end(5);
	myArray.insert_at_end(2);


	cout<<myArray;
	

	myArray.bubbleSort();
	cout<<myArray;
	myArray.delete_at_end();
	myArray.delete_at_end();
	myArray.delete_at_end();
	cout<<myArray;
	myArray.delete_at_index(5);
	myArray.delete_at_index(3);
	myArray.delete_at_index(8);
	cout<<myArray;
	myArray.insert_at_begin(3);
    myArray.insert_at_begin(2);
    myArray.insert_at_begin(1);
	cout<<myArray;
	myArray.insert_at_index(7,3);
	myArray.insert_at_index(7,5);
	myArray.insert_at_index(9,6);
	cout<<myArray;
    myArray.LinearSearch(6);
	myArray.selectionSort();

	



	cout<<myArray;
	
	Array<float> myfArray;
	myfArray.insert_at_end(3.5);
	myfArray.insert_at_end(5.5);
	myfArray.insert_at_end(6.3);
	cout<<myArray;
	myfArray.insert_at_index(3.5,4);
	myfArray.insert_at_index(5.5,5);
	myfArray.insert_at_index(6.3,6);
	cout<<myArray;
	return 0;
}