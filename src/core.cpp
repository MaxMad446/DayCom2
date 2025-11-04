// Auto-generated module | 2026-05-12T04:33:31.161518
#include <iostream>
#include <vector>

int compute_542() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
