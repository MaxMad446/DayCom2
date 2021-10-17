// Auto-generated module | 2026-05-11T20:35:05.665676
#include <iostream>
#include <vector>

int compute_543() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
