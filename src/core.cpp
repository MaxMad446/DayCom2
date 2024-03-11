// Auto-generated module | 2026-05-14T18:22:55.594632
#include <iostream>
#include <vector>

int compute_763() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
