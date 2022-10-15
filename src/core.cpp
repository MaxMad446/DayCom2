// Auto-generated module | 2026-05-14T06:22:14.431096
#include <iostream>
#include <vector>

int compute_494() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
