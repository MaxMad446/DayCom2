// Auto-generated module | 2026-05-12T20:41:06.853032
#include <iostream>
#include <vector>

int compute_490() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
