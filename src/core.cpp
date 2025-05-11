// Auto-generated module | 2026-05-12T21:18:54.792842
#include <iostream>
#include <vector>

int compute_425() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
