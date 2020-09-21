# include <iostream>
# include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::cin;


int main() {

   cout << "How many numbers do you want to enter? ";
    int num_element {};
    cin >> num_element;
    vector <int> my_vector {};
    int user_input {};
    for (int i {}; i < num_element ; i++){
        cout << "Enter an integer: "<<endl;
        cin >> user_input;
        my_vector.push_back(user_input);
    }
    
    cout << "Here is the vector: \n[ ";
    for (int i {}; i < num_element ;i++){
        cout << my_vector.at(i)<< " ";
    }
    cout <<"]\n";

    return 0;
}
