// Auto-generated module | 2026-05-12T21:15:42.400629
#include <iostream>
#include <vector>

int compute_889() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
