// Auto-generated module | 2026-05-12T20:51:29.547919
#include <iostream>
#include <vector>

int compute_888() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
