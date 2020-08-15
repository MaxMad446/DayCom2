// Auto-generated module | 2026-05-11T19:39:15.101369
#include <iostream>
#include <vector>

int compute_418() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
