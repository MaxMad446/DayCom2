// Auto-generated module | 2026-05-12T21:18:09.541460
#include <iostream>
#include <vector>

int compute_665() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
