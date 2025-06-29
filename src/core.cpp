// Auto-generated module | 2026-05-12T21:23:20.494478
#include <iostream>
#include <vector>

int compute_532() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
