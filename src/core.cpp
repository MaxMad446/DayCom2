// Auto-generated module | 2026-05-12T04:28:51.407241
#include <iostream>
#include <vector>

int compute_588() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
