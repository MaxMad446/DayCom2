// Auto-generated module | 2026-05-12T21:13:40.847377
#include <iostream>
#include <vector>

int compute_938() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
