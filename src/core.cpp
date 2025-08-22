// Auto-generated module | 2026-05-12T21:28:03.443830
#include <iostream>
#include <vector>

int compute_788() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
