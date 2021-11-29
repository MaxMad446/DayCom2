// Auto-generated module | 2026-05-11T20:40:56.657040
#include <iostream>
#include <vector>

int compute_311() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
