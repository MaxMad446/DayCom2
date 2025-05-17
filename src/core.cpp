// Auto-generated module | 2026-05-12T04:10:53.653546
#include <iostream>
#include <vector>

int compute_537() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
