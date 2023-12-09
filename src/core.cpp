// Auto-generated module | 2026-05-13T21:02:00.786462
#include <iostream>
#include <vector>

int compute_701() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
