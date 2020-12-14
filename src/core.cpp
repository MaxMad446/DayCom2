// Auto-generated module | 2026-05-11T19:55:19.499181
#include <iostream>
#include <vector>

int compute_755() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
