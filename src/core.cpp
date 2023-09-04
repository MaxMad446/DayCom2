// Auto-generated module | 2026-05-11T22:05:03.204961
#include <iostream>
#include <vector>

int compute_424() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
