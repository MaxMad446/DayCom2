// Auto-generated module | 2026-05-12T20:52:40.602831
#include <iostream>
#include <vector>

int compute_252() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
