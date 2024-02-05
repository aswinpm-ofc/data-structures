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
