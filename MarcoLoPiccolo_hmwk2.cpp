// [MarcoLoPiccolo]_hmwk2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class CounterType                                 //Class countertype declared representing values counting up
{
public:
    int currentCountValue;                                 //declares integer that represents the current count that a value is at
    void increaseCountingFunction(int& currentCountValue);  //declares the function representing increasing the count
    void decreaseCountingFunction(int& currentCountValue);  //declares the function representing decreasing the count
    void setEndCountValue(int currentCountValue);           //declares the function that represents setting the final count value
    int getEndCountValue();                                //member function that returns end count
    void displayEndCountValue();                           //member function that outputs the end count value
private:
    int endCountValue;                                      //end count value is in the private portion of the class so it can only be 
};                                                          //accessed by other member functions in the class but not anything in main

int main()
{
    /*Test program that checks that the class can be used in instances of counting a number up or down, with this example being health
    being decreased from the set current value of 5 down to 4 using dot notation to call each class function and then displaying that
    change to the screen*/
    CounterType Health;                          //Declares counter type of class type representing the health of a player
    Health.currentCountValue = 5;                  //sets public value current count to 5

    Health.decreaseCountingFunction(Health.currentCountValue);  //calls decreasing function to decrease count by one
    Health.setEndCountValue(Health.currentCountValue);   //mutator function called to set end count
    Health.displayEndCountValue();      //member function called to display private value of end count to the screen

    return 0;
}

/*Class function increasing counting function has the input parameter of the current count value with it being call
by reference so that it can make changes to the count value and it is void so that it doesn't return anything
The main use of the function is to increase the count of the count value*/
void CounterType::increaseCountingFunction(int& currentCountValue) {
    currentCountValue++;
}

/*Class function decreasing counting function has the input parameter of the current count value with it being call
by reference so that it can make changes to the count value and it is void so that it doesn't return anything
The main use of the function is to decrease the count of the count value with it also checking to make sure that it doesn't decrease 
into negative numbers*/
void CounterType::decreaseCountingFunction(int& currentCountValue) {
    if (currentCountValue < 0) {                                     //Checks to make sure that the current count value isn't negative
        cout << "Count cannot go below 0 into negative numbers";
    }
    else {
        currentCountValue--;
    }
}

/*Class function that is a mutator function that uses the input paramter of the current count value to set the private value of 
the end count value by setting it equal to the current count value with the intention of the function to show the end count after
the value has been increased and decreased with the function being void so that nothing is returned*/
void CounterType::setEndCountValue(int currentCountValue) {
    endCountValue = currentCountValue;
}

/*Class function that is of type int so that it returns the private value end count value when called in the main function*/
int CounterType::getEndCountValue() {
    return endCountValue;
}

/*Class function outputs the end count value with a message saying what the current count value is based on what end count value is set
to in the mutator function setEndCountValue*/
void CounterType::displayEndCountValue() {
    cout << "The current count value is " << endCountValue << endl;
}
