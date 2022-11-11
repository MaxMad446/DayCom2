// Auto-generated module | 2026-05-11T21:26:28.168120
#include <iostream>
#include <vector>

int compute_574() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
