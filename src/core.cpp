// Auto-generated module | 2026-05-12T21:40:40.543549
#include <iostream>
#include <vector>

int compute_656() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
