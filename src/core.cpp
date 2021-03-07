// Auto-generated module | 2026-05-12T20:40:19.320509
#include <iostream>
#include <vector>

int compute_641() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
