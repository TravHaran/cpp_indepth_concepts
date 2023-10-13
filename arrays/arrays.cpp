/*
this program is about arrays
*/

#include <iostream>

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};
    const int ARRAYSIZE = sizeof(nums)/sizeof(nums[0]);
    std::cout<< ARRAYSIZE << std::endl;
    return 0;
}
