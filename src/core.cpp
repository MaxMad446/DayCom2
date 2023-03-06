// Auto-generated module | 2026-05-13T20:32:21.530793
#include <iostream>
#include <vector>

int compute_661() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
