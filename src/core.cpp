// Auto-generated module | 2026-05-11T20:56:19.836105
#include <iostream>
#include <vector>

int compute_623() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
