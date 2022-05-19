// Auto-generated module | 2026-05-13T22:12:16.823534
#include <iostream>
#include <vector>

int compute_273() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
