// Auto-generated module | 2026-05-12T21:21:06.410960
#include <iostream>
#include <vector>

int compute_892() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
