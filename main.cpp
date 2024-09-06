#include <initializer_list>
#include <iostream>

/*!
 @brief A template routine for displaying a list of items in the console.
 @param [in]list a list of items.
*/
template <typename T>
void value_print(std::initializer_list<T> list)
{
    // a 'range-based' loop
    for(auto value: list) {
        // output of the element to the console
        std::cout << value << " ";
    }
}

int main()
{
    // test call of the subroutine
    value_print({1, 2, 3, 4, 5});

    return 0;
}
