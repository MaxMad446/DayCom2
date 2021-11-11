// Auto-generated module | 2026-05-12T21:01:19.142346
#include <iostream>
#include <vector>

int compute_391() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_391() << std::endl;
    return 0;
}
