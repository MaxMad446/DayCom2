// Auto-generated module | 2026-05-12T04:39:37.197024
#include <iostream>
#include <vector>

int compute_677() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
