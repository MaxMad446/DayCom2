// Auto-generated module | 2026-05-12T04:45:01.722762
#include <iostream>
#include <vector>

int compute_585() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
