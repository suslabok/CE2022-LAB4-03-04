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
           cout <<" Before sorting " << " ---" <<endl;
           for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++ )// printing the values
           {
               cout  <<  array[i]<< endl;
           }
               int key ;
           int t;//for future purpose
           int compcount = 0;//to keep track of comparisons
           for (int j = 1; j<sizeof(array)/sizeof(array[0]);j++)
           {
               key = array[j];//assign to second element initially
               t = j-1;//assign to first element initially
               while (j > 0 && array[t]>key)
               {
                   array[t+1] = array[t];//moving array if bigger than next element
                   t = t-1;
                   compcount++;
               }
               array[t+1] = key;
           }
           cout << " After sorting" << " --- " <<endl;

           for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++ )
           {
               cout  <<  array[i]<< endl;
           }
           cout << "comparison count is " << compcount << endl;
           system ("pause");

           return 0;

        }