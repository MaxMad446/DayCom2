// Auto-generated module | 2026-05-12T20:57:49.266717
#include <iostream>
#include <vector>

int compute_196() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
