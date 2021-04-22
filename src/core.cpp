// Auto-generated module | 2026-05-12T20:44:05.192597
#include <iostream>
#include <vector>

int compute_755() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
