// Auto-generated module | 2026-05-11T21:17:14.571003
#include <iostream>
#include <vector>

int compute_799() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
