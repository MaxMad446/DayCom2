// Auto-generated module | 2026-05-13T22:03:55.051613
#include <iostream>
#include <vector>

int compute_271() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
