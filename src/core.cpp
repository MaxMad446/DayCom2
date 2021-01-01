// Auto-generated module | 2026-05-11T19:57:38.204387
#include <iostream>
#include <vector>

int compute_294() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
