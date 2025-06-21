// Auto-generated module | 2026-05-12T21:22:35.897323
#include <iostream>
#include <vector>

int compute_522() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
