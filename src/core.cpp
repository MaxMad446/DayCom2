// Auto-generated module | 2026-05-12T21:09:53.086656
#include <iostream>
#include <vector>

int compute_224() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
