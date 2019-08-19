// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() //is the number of elements the vector container has in it
         << " capacity: " << vec.capacity() << endl; //the number of elements the vector container can hold

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);  //the capacity of a vector is not fixed so as more elements are added te capacity grows as it does
        cout << "vec: size: " << vec.size()
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}

// the vector capacity doubles its previous size for efficiency purposes so the memory is not regularly changed everytime
// the vector increases its size. Doubling it gives more space for growth of the vector and thus saves time by not
// constantly reallocating memory every time the user adds more elements.
