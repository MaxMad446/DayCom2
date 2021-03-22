// Auto-generated module | 2026-05-12T20:41:34.891629
#include <iostream>
#include <vector>

int compute_102() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
