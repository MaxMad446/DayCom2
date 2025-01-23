// Auto-generated module | 2026-05-12T03:55:52.655852
#include <iostream>
#include <vector>

int compute_461() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
