#include <iostream>
#include <vector>
using namespace std;




template<typename T>//here is my template
T total(vector<T> &data){//template function accepts a vector argument
    T sum {0};
    
    auto iterate = data.begin();//here I set my iterator to the beginning of the vector
    while(iterate != data.end()){//while loop adds all numbers and stores it to variable sum
        sum += *iterate;
        iterate++;
    }
    return sum;
}

int main()
{
    
    int count{0};
    
    
//------------------------Sum for integers----------------------

    cout << endl;
    cout << "How many integer values do you wish to total? ";
    cin >> count;
    
    vector<int> intVec {};
    int intNum{0};
    
    for(int x{1}; x <= count; x++){
        cout << "Enter a value: ";
        cin >> intNum;
        intVec.push_back(intNum);
    }
    cout << "The total is: " << total(intVec) << endl << endl;
    
    
//------------------------Sum for doubles----------------------

    cout << "How many double values do you wish to total? ";
    cin >> count;
    
    vector<double> doubVec {};
    double doubNum{0.0};
    
    for(int x{1}; x <= count; x++){
        cout << "Enter a value: ";
        cin >> doubNum;
        doubVec.push_back(doubNum);
    }
    cout << "The total is: " << total(doubVec) << endl;
    
    
	system("pause");
	return 0;
}
