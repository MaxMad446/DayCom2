// Auto-generated module | 2026-05-12T04:42:22.580559
#include <iostream>
#include <vector>

int compute_650() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
