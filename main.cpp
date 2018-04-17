#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// Implement display function
void display_turtles(std::vector<std::string> turtle) {

    // Implement below

    for(auto x: turtle)
        std::cout << x << std::endl;
}






// Implement sorting algorithm
std::vector<std::string> radix_sort(std::vector<std::string> a) {
    std::vector<std::string> sorted_vec;

    // Implement below


    return sorted_vec;
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
    std::string line_in;
    std::stringstream ss;
    std::vector<std::string> turtle_names;

    // Modify code
    while(std::cin >> line_in) {
        turtle_names.push_back(line_in);

        // Modify code
        std::vector<std::string> temp_vec = radix_sort(turtle_names);
        display_turtles(temp_vec); // Displays the sorted information
        temp_vec.clear();
        turtle_names.clear();
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