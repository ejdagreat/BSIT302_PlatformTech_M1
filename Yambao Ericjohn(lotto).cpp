#include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <sstream>
    using namespace std;
    int main (int argc, char * const argv[]) {
        int numberCount;
        int maxNumbers;
        int counter = 0;
             int BOARD_2012_M7_K01[5] = {5,6,18,19,34};
             int BOARD_2012_M7_K02[5] = {5,25,28,29,40};
             int BOARD_2012_M7_K03[5] = {17,24,26,37,43};
             int BOARD_2012_M7_K04[5] = {1,8,14,34,42};
             int BOARD_2012_M7_K05[5] = {19,26,31,32,42};
             int BOARD_2012_M7_K06[5] = {5,14,27,35,40};
             int BOARD_2012_M7_K07[5] = {28,32,33,37,43};
             int BOARD_2012_M7_K08[5] = {2,13,18,41,45};
             int BOARD_2012_M7_K09[5] = {1,4,6,10,41};
        cout << "Lottery Game" << endl << "=================================" << endl;
        cout << "How many Lottery Numbers = ";
        cin >> numberCount;
        cout << "from 1 to ? ";
        cin >> maxNumbers;
        cout << "You have chosen " << numberCount << " Lottery Numbers from 1 to " << maxNumbers << endl;
        int lotteryNumbers[numberCount];
        int i, j;
        bool newNumber;
        long t;
        srand(time(NULL));
        for (t=0; t<3; t++){
        for(i=0; i<numberCount; i++) // get numbers
        {
            do
            {   // Check Random
                lotteryNumbers[i] = rand() % maxNumbers + 1;
                newNumber = true;
                for (j=0; j<i; j++)
                {
                    if (lotteryNumbers[i]==lotteryNumbers[j])
                    { // Check for existing numbers
                        newNumber = false;
                    }
                    else
                         switch (lotteryNumbers[j])
                         {
                       lotteryNumbers[i] = rand() % maxNumbers + 1;
                                             newNumber = true;
                                 }
                }
            } while (!newNumber);
        }
        for (i=0; i<numberCount; i++)
        {
            cout << lotteryNumbers[i] << " ";
        }
        cout <<"("<<counter++<<")"<< endl;
}
}
