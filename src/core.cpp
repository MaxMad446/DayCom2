// Auto-generated module | 2026-05-12T21:40:20.795939
#include <iostream>
#include <vector>

int compute_240() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
