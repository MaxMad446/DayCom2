// Auto-generated module | 2026-05-11T19:28:30.366457
#include <iostream>
#include <vector>

int compute_457() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
