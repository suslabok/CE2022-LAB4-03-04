 #include<iostream>

        #include <cstdlib>

        #include <ctime>

        using namespace std;

        int main(void)
        {

           int array[100];

           srand (time(0));

           for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++ )// inputting values into array[10]
           {
              array[i] = 1 + (rand()%100); //any random number between 1 - 100
           }
           cout<<"before sorting:"<<"---"<<endl;
           for (int i=0;i< sizeof(array)/sizeof(array[0]);i++)
           {
              cout<<array[i]<<endl;
           }
           int t;
           int compcount=0;
           for(int j=0;j <sizeof(array)/sizeof(array[0]);j++)
           {
            int key =array[j];
            t=j-1;
            while(j>0 && array[t]>key){
              array[t+1]=array[t];
              t=t-1;
              compcount++;
            }
            array[t+1]=key;
           }
           cout<<"after sorting:"<<"---"<<endl;
           for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
            cout<<array[i]<<endl;
           }
           cout<<"comparison count is "<<compcount<<endl;
           }
