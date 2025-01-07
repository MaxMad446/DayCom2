// Auto-generated module | 2026-05-12T21:08:30.179079
#include <iostream>
#include <vector>

int compute_217() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
