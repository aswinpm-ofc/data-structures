#include"stack.h"
int main()
{
    int u;
    std::cout<<"how much is your stack size"<<std::endl;
    std::cin>>u;
    stack * newStack = new stack(u);
    int choice;
    choice==1;
    while(choice!=0)
    {
        std::cout<<"enter your choice"<<std::endl;
        std::cout<<"1.push"<<std::endl;
        std::cout<<"2.pop"<<std::endl;
        std::cout<<"3.peek"<<std::endl;
        std::cout<<"0.exit"<<std::endl;
        std::cin>>choice;
        switch(choice)
        {
            case 1:
                int data;
                std::cout<<"enter the data"<<std::endl;
                std::cin>>data;
                newStack->push(data);
                break;
            case 2:
                std::cout<<"the poped element is"<<newStack->pop()<<std::endl;
                break;
            case 3:
                std::cout<<"the peeked element is"<<newStack->peek()<<std::endl;
                break;
            case 0:
                std::cout<<"exiting"<<std::endl;
                exit (-1);
                break;
            default:
                std::cout<<"wrong choice"<<std::endl;
                break;
    }

    

    }
    return 0;

}