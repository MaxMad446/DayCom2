// Auto-generated module | 2026-05-13T20:51:34.102550
#include <iostream>
#include <vector>

int compute_736() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
