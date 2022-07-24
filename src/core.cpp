// Auto-generated module | 2026-05-11T21:12:16.566732
#include <iostream>
#include <vector>

int compute_425() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
