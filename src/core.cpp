// Auto-generated module | 2026-05-12T21:28:47.899015
#include <iostream>
#include <vector>

int compute_403() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
