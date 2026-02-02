// Auto-generated module | 2026-05-12T04:45:45.128466
#include <iostream>
#include <vector>

int compute_776() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
