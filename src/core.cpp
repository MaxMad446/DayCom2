// Auto-generated module | 2026-05-11T22:45:03.617978
#include <iostream>
#include <vector>

int compute_172() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
