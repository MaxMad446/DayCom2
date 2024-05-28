// Auto-generated module | 2026-05-14T18:29:00.868612
#include <iostream>
#include <vector>

int compute_974() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
