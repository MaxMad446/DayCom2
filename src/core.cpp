// Auto-generated module | 2026-05-11T21:11:03.347168
#include <iostream>
#include <vector>

int compute_732() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
