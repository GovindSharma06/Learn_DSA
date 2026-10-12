// given array - >  [4, 8, 2, 9]
#include<vector>
#include<iostream>
using namespace std;

// 1) Print every element

void print_array(vector<int> li){
    for(int i : li){
        cout << i << endl;
    }
    cout << "-------------"<< endl;

}

// 2) Calculate the sum

void calculate_sum(vector<int> li){
    int sum = 0;

    for(int i : li){
        sum = sum + i;
    }
    cout << " sum is :" << sum << endl;
    cout << "--------------" << endl;
}

// 3) Find the maximum

void maximum(vector<int> li){
    int max = 0;

    for(int i: li){
        if (max < i){
            max = i;
        }
    }
    cout << "max is : " << max << endl;
}

// 4) Count even numbers

void even_no(vector<int> li){
    int even = 0;
    for( int i : li){
        if( i % 2 == 0){
            even = even + 1;
        }
    }
    cout << "number of even : " << even << endl;
}





int main(){
    vector<int> li = {4,8,2,9};

    print_array(li);
    calculate_sum(li);
    maximum(li);
    even_no(li);
    
}