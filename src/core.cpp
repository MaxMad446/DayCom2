// Auto-generated module | 2026-05-12T03:40:05.244720
#include <iostream>
#include <vector>

int compute_211() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
