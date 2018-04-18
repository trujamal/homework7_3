#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

struct turtle {
    std::string turtle_names;
    int identifier;
};

void print_info(std::vector<std::string> a) {
    for(auto x: a)
        std::cout << a << std::endl;
}

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
        {
            turtle_vec[l].identifier = desired_map[turtle_vec[l].turtle_names];
        }

        int largest_val = -1, r_val = -1;
        for (int m = 0; m < test_case; ++m) {

        }



        // Print out vector information
        print_info(output);
        std::cout << std::endl;
    }




    return 0;
}

/**

 For each test case, the output consists of a sequence of turtle names, one per line, indicating the order in
which turtles are to leave their positions in the stack and crawl to the top. This sequence of operations
should transform the original stack into the required stack and should be as short as possible. If more
than one solution of shortest length is possible, any of the solutions may be reported.
Print a blank line after each test case.


 */