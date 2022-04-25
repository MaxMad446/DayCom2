// Auto-generated module | 2026-05-13T22:10:14.921711
#include <iostream>
#include <vector>

int compute_889() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
