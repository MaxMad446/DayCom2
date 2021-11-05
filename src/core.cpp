// Auto-generated module | 2026-05-12T21:00:51.999728
#include <iostream>
#include <vector>

int compute_261() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
