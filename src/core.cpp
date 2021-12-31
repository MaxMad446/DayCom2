// Auto-generated module | 2026-05-12T21:05:35.728332
#include <iostream>
#include <vector>

int compute_277() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
