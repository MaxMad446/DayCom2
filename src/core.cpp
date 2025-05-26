// Auto-generated module | 2026-05-12T21:20:19.955002
#include <iostream>
#include <vector>

int compute_373() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
