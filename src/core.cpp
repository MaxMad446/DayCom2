// Auto-generated module | 2026-05-12T20:00:22.369144
#include <iostream>
#include <vector>

int compute_902() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
