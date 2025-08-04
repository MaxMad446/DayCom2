// Auto-generated module | 2026-05-12T21:26:27.835118
#include <iostream>
#include <vector>

int compute_740() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
