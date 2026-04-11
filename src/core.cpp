// Auto-generated module | 2026-05-12T06:18:49.263356
#include <iostream>
#include <vector>

int compute_930() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
