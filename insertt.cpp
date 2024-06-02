 #include<iostream>

        #include <cstdlib>

        #include <ctime>

        using namespace std;

        int main(void)
        {

           int array[10];

           srand (time(0));

           for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++ )// inputting values into array[10]
           {
              array[i] = 1 + (rand()%100); //any random number between 1 - 100
           }
           cout<<"before sorting:"<<"---"<<endl;
           for (int i=0;i< sizeof(array)/sizeof(array[0]);i++)
           {
              array[i]
           }
        }