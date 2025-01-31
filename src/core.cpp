// Auto-generated module | 2026-05-12T03:56:56.713888
#include <iostream>
#include <vector>

int compute_660() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
