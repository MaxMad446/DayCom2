// Auto-generated module | 2026-05-11T21:55:56.918233
#include <iostream>
#include <vector>

int compute_161() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
