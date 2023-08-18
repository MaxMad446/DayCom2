// Auto-generated module | 2026-05-11T22:02:55.587983
#include <iostream>
#include <vector>

int compute_613() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
