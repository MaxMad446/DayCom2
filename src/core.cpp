// Auto-generated module | 2026-05-12T21:19:26.839325
#include <iostream>
#include <vector>

int compute_543() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
