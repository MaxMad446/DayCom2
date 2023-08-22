// Auto-generated module | 2026-05-13T20:52:55.920771
#include <iostream>
#include <vector>

int compute_654() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
