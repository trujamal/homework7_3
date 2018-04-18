#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

/**
 * @author Jamal Rasool
 * @version 1.0
 * @note UVA 10152
 * Program designed to go through and take n test cases, then from there will input the number of test strings (turtle)
 * then check to see if it can be sorted to display the correct order.
 */

struct turtle {
    std::string turtle_names;
    int identifier;
};

/**
 * UVA 10152
 * The first line of the input consists of a single integer K giving the number of test cases. Each test
case consist on an integer n giving the number of turtles in the stack. The next n lines specify the
original ordering of the turtle stack. Each of the lines contains the name of a turtle, starting with the
turtle on the top of the stack and working down to the turtle at the bottom of the stack. Turtles have
unique names, each of which is a string of no more than eighty characters drawn from a character set
consisting of the alphanumeric characters, the space character and the period (‘.’). The next n lines
in the input gives the desired ordering of the stack, once again by naming turtles from top to bottom.
Each test case consists of exactly 2n + 1 lines in total. The number of turtles (n) will be less than or
equal to two hundred.
 */

int main() {

    // First need to check for test cases
    int test_case;
    std::cin >> test_case;

    // Then create a loop based off of the test case to cycle through
    for (int i = 0; i < test_case; ++i) {

        int turtle_stack;
        std::cin >> turtle_stack;
        std::cin.ignore();

        // -- Declaring Variables --
        std::map<std::string, int> desired_map;
        std::vector<turtle> turtle_vec;
        std::vector<std::string> output;
        turtle t;
        std::string user_input;
        int largest_val = -1, r_val = -1;

        // Have two loops (One for the original then one for Expected)
        for (int j = 0; j < turtle_stack; ++j) {
            std::getline(std::cin, user_input); // Full text strings
            t.identifier = 0; // Default value till later on
            t.turtle_names = user_input;
            turtle_vec.push_back(t);
        }

        // Secondary loop for expected order
        for (int k = 0; k < turtle_stack; ++k) {
            std::getline(std::cin, user_input); // Full text strings
            desired_map[user_input] = k;
            output.push_back(user_input);
        }

        // Swap orders
        for (int l=0; l<turtle_stack; ++l)
            turtle_vec[l].identifier = desired_map[turtle_vec[l].turtle_names];


        // Checking string for length doing sort.
        for (int m=0; m<turtle_stack; ++m)
        {
            if (turtle_vec[m].identifier > largest_val)
                largest_val = turtle_vec[m].identifier;
            else if (turtle_vec[m].identifier > r_val)
                r_val = turtle_vec[m].identifier;
        }

        // Print out vector information
        for(int n=r_val; n>=0; --n)
            std::cout << output[n] << std::endl;

        std::cout << std::endl;
    }

    return 0;
}
