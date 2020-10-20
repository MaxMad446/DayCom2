// Auto-generated module | 2026-05-11T19:47:53.843368
#include <iostream>
#include <vector>

int compute_222() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
