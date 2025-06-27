// Auto-generated module | 2026-05-12T04:16:01.747945
#include <iostream>
#include <vector>

int compute_749() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
