// Auto-generated module | 2026-05-11T21:45:29.959238
#include <iostream>
#include <vector>

int compute_998() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
