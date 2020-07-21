// Auto-generated module | 2026-05-11T19:35:56.223962
#include <iostream>
#include <vector>

int compute_799() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
