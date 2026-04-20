// Auto-generated module | 2026-05-12T06:20:00.204913
#include <iostream>
#include <vector>

int compute_792() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
