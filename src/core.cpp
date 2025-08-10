// Auto-generated module | 2026-05-12T21:26:58.863502
#include <iostream>
#include <vector>

int compute_875() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
