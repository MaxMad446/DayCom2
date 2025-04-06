// Auto-generated module | 2026-05-12T04:05:24.359841
#include <iostream>
#include <vector>

int compute_770() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
