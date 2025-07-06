// Auto-generated module | 2026-05-12T04:17:17.119834
#include <iostream>
#include <vector>

int compute_490() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
