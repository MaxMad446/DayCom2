// Auto-generated module | 2026-05-12T03:53:34.883422
#include <iostream>
#include <vector>

int compute_291() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
