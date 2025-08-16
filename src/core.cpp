// Auto-generated module | 2026-05-12T21:27:30.588485
#include <iostream>
#include <vector>

int compute_430() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
