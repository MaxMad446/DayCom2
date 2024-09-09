// Auto-generated module | 2026-05-12T03:38:05.135068
#include <iostream>
#include <vector>

int compute_666() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
