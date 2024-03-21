// Auto-generated module | 2026-05-11T22:31:17.141485
#include <iostream>
#include <vector>

int compute_741() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
