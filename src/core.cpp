// Auto-generated module | 2026-05-12T03:37:53.848877
#include <iostream>
#include <vector>

int compute_398() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
