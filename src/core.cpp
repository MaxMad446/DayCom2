// Auto-generated module | 2026-05-12T21:29:27.884044
#include <iostream>
#include <vector>

int compute_241() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
