// Auto-generated module | 2026-05-12T21:02:50.104008
#include <iostream>
#include <vector>

int compute_891() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
