// Auto-generated module | 2026-05-12T04:27:29.362233
#include <iostream>
#include <vector>

int compute_383() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
