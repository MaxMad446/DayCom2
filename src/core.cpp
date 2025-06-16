// Auto-generated module | 2026-05-12T21:22:08.703060
#include <iostream>
#include <vector>

int compute_721() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
