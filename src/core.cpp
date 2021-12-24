// Auto-generated module | 2026-05-12T21:05:00.498226
#include <iostream>
#include <vector>

int compute_991() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
