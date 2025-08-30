// Auto-generated module | 2026-05-12T21:28:52.679276
#include <iostream>
#include <vector>

int compute_437() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
