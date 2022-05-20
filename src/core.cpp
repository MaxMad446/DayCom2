// Auto-generated module | 2026-05-11T21:03:21.431367
#include <iostream>
#include <vector>

int compute_639() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
