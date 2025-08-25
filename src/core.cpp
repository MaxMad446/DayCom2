// Auto-generated module | 2026-05-12T21:28:21.530028
#include <iostream>
#include <vector>

int compute_530() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
