#include"Array.h"


template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class U>
ostream& operator << (ostream& os,Array<U> M){
	int i;
	os<<endl;
	for (i=M.LB;i<=M.UB;i++){
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}

template <class T>
void Array<T>::bubbleSort()
{       
    for(int i=LB;i<UB;i++)
    {
        for(int j=LB;j<=UB+LB-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
}
template <class T>
void Array<T>::delete_at_end()
{
    if (LB<=UB)
    {
        
        UB=UB-1;
    }
    else
    {
        cout<<"\nIndex out of bound\n";
    }
}
template <class T>
void Array<T>::delete_at_index(int pos)
{
    if (LB<=pos && pos<=UB)
    {
        int k=pos+1;
        while (k<=UB)
        {
            A[k-1]=A[k];
            k=k+1;
        }
        UB=UB-1;
    }
    else
    {
        cout<<"\nIndex out of bound\n";
    }
}

template <class T>
void Array<T>::insert_at_begin(T key)
{
    UB=UB+1;
    int K=UB-1;
    while(K>=LB)
    {
        A[K+1]=A[K];
        K=K-1;
    }
    A[LB]=key;
}
template <class T>
void Array<T>::insert_at_end(T key)
{
	UB=UB+1;
	A[UB]=key;
}
template <class T>
void Array<T>::insert_at_index(T key,int pos){
    UB=UB+1;
    int K=UB-1;
    while(K>=pos)
    {
        A[K+1]=A[K];
        K=K-1;
    }
    A[pos]=key;
}
template <class T>
void Array<T>::LinearSearch(T key)
{
    int i=LB;
    while (i<=UB)
    {
        if (A[i]==key)
        {
            int index=i;
            break;
        }
        i=i+1;
    }
}

template <class T>
void Array<T>::selectionSort()
{       
    for(int i=LB;i<UB;i++)
    {
        int min=i;
        for(int j=i+1;j<=UB;j++)
        {
            if(A[j]<A[min])
            {
                 min=j;
            }
        }    
        if (min!=i)
        {
            int temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
        
    }
}
template<class  T> 
int Array<T>::partition(int lb ,int  ub )

{
    int j=lb-1;
    int i=lb;
    T pivot=A[ub];
    while(i<ub)
    {
        if (A[i] <= pivot)  
		{ 
            j++; 
            T temp =A[j];
            A[j]=A[i];
            A[i]=temp;
        } 
        i++;  
    } 
    T temp =A[j + 1];
    A[j + 1] = A[ub]; 
    A[ub] = temp;  
    return j + 1; 
    }
    template <class T>
    void Array<T>::quick_sort()
    {
    quick_sort( LB, UB);
    }
    template <class T>
    void Array<T> ::quick_sort(int lb, int ub)  
    { 
        if  (lb < ub) 
        { 
            int pi = partition(lb, ub);  
            quick_sort(lb, pi - 1);  
            quick_sort(pi + 1, ub); 
          
        }    
    } 
template <class T>
void Array<T>::merge( int LB, int mid, int UB) {
    int n1 = mid - LB + 1;
    int n2 = UB - mid;

    T L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = A[LB + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];
    int i = 0;
    int j = 0; 
    int k = LB; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

template <class T>
void Array<T>::merge_sort(int LB, int UB) {
    if (LB < UB) {
        int mid = LB + (UB - LB) / 2;
        merge_sort(LB, mid);
        merge_sort(mid + 1, UB);
        merge(LB, mid, UB);
    }
    else 
    cout<<" merge sort is not possible";
    }
template<class T>
void Array<T>::rotate_array_left() {
    int key;
    cout<<"Enter The position to Be rotated:";
    cin>>key;
    int n = UB - LB + 1;
    key = key % n;
    T temp[key];
    int k = LB;
    for (int i = 0; i < key; i++) {
        temp[i] = A[k];
        k++;
    }
    k = LB;
    for (int i = 0; i < n - key; i++) {
        A[k] = A[k + key];
        k++;
    }
    for (int i = 0; i < key; i++) {
        A[UB - key + i + 1] = temp[i];
    }
}


template<class T>
void Array<T>::rotate_array_right() {
        int key;
        cout<<"Enter The position to Be rotated:";
        cin>>key;
        int n = UB - LB +1;
        key = key % n;
        int temp[key];
        int k;
        k=LB;
        for (int i = 0; i < key; i++) {
            temp[i] = A[UB - key + i+1];
        }
        for (int i = n - 1; i >= key; i--) {
            A[k] = A[k - key];
            k++;
        }
        k=LB;
        for (int i = 0; i < key; i++) {
            A[k] = temp[i];
        }
    }
template<class T>
void Array<T>::distinct_elements() {
        T temp; 
        int n = UB - LB +1;
        int count = 0;
        T B[n];
        for (int i = LB; i <= UB; i++) {
            bool isDis=true;
            for(int j=0;j<count;j++){
            if(A[i]==B[j]){
                isDis=false;
                break;
            }
            }
            if (isDis){
                B[count++]=A[i];
            }
        }
        cout << "Distinct Elements:";
        for (int i = 0; i < count; i++) {
            cout << " " << B[i];
        }
        cout << endl;
    }
template<class T>
void Array<T>::frequency_table(){
    T temp;
    int n = UB - LB + 1;
    int count = 0;
    T B[n];
    for (int i = LB; i <= UB; i++) {
        bool isDis = true;
        for (int j = 0; j < count; j++) {
            if (A[i] == B[j]) {
                isDis = false;
                break;
            }
        }
        if (isDis) {
            B[count++] = A[i];
        }
    }
    cout << "Frequency Table" << endl;
    cout <<" __________" << endl;
    for (int i = 0; i < count; i++) {
        int freq = 0;
        for (int j = LB; j <= UB; j++) {
            if (B[i] == A[j]) {
                freq++;
            }
        }
          cout << B[i] << "\t\t:" << freq << endl;}
      
    }
   
   
   





        


    
    


    

