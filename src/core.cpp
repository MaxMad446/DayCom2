// Auto-generated module | 2026-05-12T20:48:05.571344
#include <iostream>
#include <vector>

int compute_729() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
