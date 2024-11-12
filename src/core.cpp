// Auto-generated module | 2026-05-12T03:46:24.229329
#include <iostream>
#include <vector>

int compute_640() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
