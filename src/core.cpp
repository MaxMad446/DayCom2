// Auto-generated module | 2026-05-12T21:39:32.161966
#include <iostream>
#include <vector>

int compute_851() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
