#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

class Numbers{
private:

    int size;
    double *myarray;
    double sum;
public:
    //default constructor, allocate dynamic array
    Numbers(){
        size=0;
        myarray = NULL;
        sum = 0;
    }

    //constructor
    Numbers(int size,double *myarray,double sum){
        this->size = size;
        this->myarray = myarray;
        this->sum = sum;
    }
   
    //setter
    void setArray(double *arr){
        myarray = arr;
    }

    void setSize(int length){
        size = length;
    }

    void setSum(double result){
        sum = result;
    }


    //getter
    int getSize(){
        return size;
    }

    double getArray(){
        return *myarray;
    }
    
    double getSum(){
        return sum;
    }
   
    //destructor 
    ~Numbers(){
        delete []myarray;
    }
};

void *do_work(void *arg);
bool joinable();
void detach();