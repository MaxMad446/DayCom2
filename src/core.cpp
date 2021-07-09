// Auto-generated module | 2026-05-12T20:50:43.429711
#include <iostream>
#include <vector>

int compute_220() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
