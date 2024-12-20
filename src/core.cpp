// Auto-generated module | 2026-05-12T03:51:21.982462
#include <iostream>
#include <vector>

int compute_544() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
