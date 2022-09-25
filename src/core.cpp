// Auto-generated module | 2026-05-11T21:20:24.728753
#include <iostream>
#include <vector>

int compute_435() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
