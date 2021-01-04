// Auto-generated module | 2026-05-14T18:12:59.027068
#include <iostream>
#include <vector>

int compute_733() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
