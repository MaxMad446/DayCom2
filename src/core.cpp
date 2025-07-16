// Auto-generated module | 2026-05-12T21:24:49.712666
#include <iostream>
#include <vector>

int compute_938() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
