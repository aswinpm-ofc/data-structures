#include "Array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(3);
	myArray.insert_at_end(5);
	myArray.insert_at_end(6);
	myArray.insert_at_end(5);
	myArray.insert_at_end(2);
	cout<<"quick_sort";
	myArray.quick_sort();


	cout<<myArray;
	
	cout<<"bubbleSort";
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
	cout<<"my array";
	myArray.merge(1,4 ,6);
	cout<<myArray;
	cout<<"my arrayfd\n";

	 myArray.merge_sort(4,2);
	 cout<<myArray;
	cout<<"my array";
	 
	cout<<myArray;
	cout<<"my array";
    myArray.LinearSearch(6);
	cout<<myArray;
	cout<<"my array";
	myArray.selectionSort();
	cout<<myArray;
	cout<<"my array";


	Array<int> myArray1;
	myArray1.insert_at_end(6);
	myArray1.insert_at_end(9);
	myArray1.insert_at_end(3);
	myArray1.insert_at_end(1);
	myArray1.insert_at_end(4);
	cout<<myArray;
	cout<<"my array";

	
	
	cout<<myArray1;
	





	

	



	



	cout<<myArray;
	
	Array<float> myfArray;
	myfArray.insert_at_end(3.5);
	myfArray.insert_at_end(5.5);
	myfArray.insert_at_end(6.3);
	cout<<myfArray;
	myfArray.insert_at_index(3.5,4);
	myfArray.insert_at_index(5.5,5);
	myfArray.insert_at_index(6.3,6);
	cout<<myfArray;
	

	cout<<"rotate Array Left"<<endl;
	cout<<"----------------"<<endl;
	myArray.rotate_array_left();
	cout<<myArray;

	
	cout<<"rotate Array Right"<<endl;
	cout<<"----------------"<<endl;
	myArray.rotate_array_left();
	cout<<myArray;


	myArray.distinct_elements();

	
	myArray1.frequency_table();

	return 0;
}