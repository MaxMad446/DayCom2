// Auto-generated module | 2026-05-12T04:44:19.238085
#include <iostream>
#include <vector>

int compute_941() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
