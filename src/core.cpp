// Auto-generated module | 2026-05-12T21:01:22.680290
#include <iostream>
#include <vector>

int compute_631() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
