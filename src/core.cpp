// Auto-generated module | 2026-05-11T21:30:51.462178
#include <iostream>
#include <vector>

int compute_469() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
