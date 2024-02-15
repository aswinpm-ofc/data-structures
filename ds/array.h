#include<iostream>
#include<ostream>

using namespace std;
template <class T>
class Array{
	int LB,UB;
	T A[1000];
  public:
  	Array();
  	Array(int,int,T[]);
    int BinarySearch(T);
    void bubbleSort();
    void delete_at_end();
    void delete_at_index(int);
	void insert_at_begin(T);
	void insert_at_end(T);
	void insert_at_index(T,int);

	void LinearSearch(T);
	 void selectionSort();
	 int partition(int a,int b);
	 void quick_sort();
	 void quick_sort(int a,int b);


	 void merge(int a,int b ,int c);
	 void merge_sort(int a,int b);
	 void rotate_array_left();
	 void rotate_array_right();

	 int BinarySearch(int LB,int UB,T[],T key);
	 

	void distinct_elements();
	void frequency_table();



	 


 	template <class U>
  	friend ostream& operator<<(ostream&, Array<U> );
};