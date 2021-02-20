// Auto-generated module | 2026-05-12T21:34:47.682390
#include <iostream>
#include <vector>

int compute_195() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
