// Auto-generated module | 2026-05-13T20:27:14.550731
#include <iostream>
#include <vector>

int compute_875() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
