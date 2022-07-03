// Auto-generated module | 2026-05-14T06:13:59.486475
#include <iostream>
#include <vector>

int compute_938() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
