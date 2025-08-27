// Auto-generated module | 2026-05-12T21:28:33.229720
#include <iostream>
#include <vector>

int compute_907() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
