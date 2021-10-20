// Auto-generated module | 2026-05-12T20:59:29.041047
#include <iostream>
#include <vector>

int compute_773() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
