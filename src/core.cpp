// Auto-generated module | 2026-05-12T19:59:47.559073
#include <iostream>
#include <vector>

int compute_881() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
