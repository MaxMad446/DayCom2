// Auto-generated module | 2026-05-12T04:13:46.039520
#include <iostream>
#include <vector>

int compute_939() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
