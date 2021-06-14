// Auto-generated module | 2026-05-12T20:48:36.232085
#include <iostream>
#include <vector>

int compute_888() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
