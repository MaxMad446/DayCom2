// Auto-generated module | 2026-05-12T03:41:19.697173
#include <iostream>
#include <vector>

int compute_693() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
