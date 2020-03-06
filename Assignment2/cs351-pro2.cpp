#include"thread.h"

using namespace std;

int main(){
    //class object
    Numbers MyNumbers;

    //create 4 different threads
    thread test1;
    thread test2;
    thread test3;
    thread test4;



    //local dynamic array
    double *array = new double[400000];
    
    //populate the dynamic array with 400,000 random numbers between 1.00 and 4.99
    double total;
    for(int i=0;i<400000;i++){
        //create number 0 to 1 and times 3.99 to get the numbers from 0 to 3.99 
        //plus 1 to get the final range from 1.0 to 4.99
        array[i] = 1 + rand() % 100 /(double) 101 * 3.99; 
        cout<<array[i]<<" ";
        total+= array[i];
        
    }

    cout<<"Sum: "<<total<<endl;
    cout<<"size: "<<sizeof(array)<<endl; //size doesn't match our expectation
    //calling setter funtions by passing parameters
    MyNumbers.setSum(total);
    MyNumbers.setArray(array);
    MyNumbers.setSize(400000);
    



/*
    //test the thread if joinable
    if(threadTest1.joinable()){
        cout<<"The thread is joinable"<<endl;
        threadTest1.join();
    }
*/
    return 0;
}