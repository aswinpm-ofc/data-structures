#include<iostream>
class stack {
    int ToatalSize;
    int CurrentSize;
    int* arr;
    public:
        stack (int size )
        {
        this->ToatalSize = size;
        this->CurrentSize = 0;
        this->arr = new int[ToatalSize];
        }
        ~stack();
        bool isEmpty(){
            return this->CurrentSize==0;
        }
        bool isFull(){
            return this->CurrentSize==this->ToatalSize;
        }

        void push(int data){
            if(isFull())
            {
                std::cout<<"Stack is full"<<std::endl;
                return;
            }
            else
            {
            this->arr[this->CurrentSize] = data;
            this->CurrentSize++;
            }
            
        }
        int pop(){
            if(isEmpty())
            {
                std::cout<<"Stack is empty"<<std::endl;
                return -1;
            }
            else
            {
                this->CurrentSize--;
                return this->arr[this->CurrentSize];
            }
        }
        int peek()
        {
            if(isEmpty())
            {
                std::cout<<"Stack is empty"<<std::endl;
                return -1;
            }
            else{
                return this->arr[this->CurrentSize-1];
            }
        }
        


};


