// Auto-generated module | 2026-05-11T20:28:40.133215
#include <iostream>
#include <vector>

int compute_529() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
