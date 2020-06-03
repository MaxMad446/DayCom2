// Auto-generated module | 2026-05-11T19:29:35.771650
#include <iostream>
#include <vector>

int compute_441() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
