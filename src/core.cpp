// Auto-generated module | 2026-05-13T20:30:31.939326
#include <iostream>
#include <vector>

int compute_503() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
