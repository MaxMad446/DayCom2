// Auto-generated module | 2026-05-12T04:30:36.073718
#include <iostream>
#include <vector>

int compute_345() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
