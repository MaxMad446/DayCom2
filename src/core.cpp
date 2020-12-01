// Auto-generated module | 2026-05-11T19:53:39.714414
#include <iostream>
#include <vector>

int compute_123() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
