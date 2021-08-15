// Auto-generated module | 2026-05-12T20:53:45.403190
#include <iostream>
#include <vector>

int compute_514() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
