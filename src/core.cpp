// Auto-generated module | 2026-05-12T21:03:09.957791
#include <iostream>
#include <vector>

int compute_470() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
