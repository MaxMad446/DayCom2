// Auto-generated module | 2026-05-13T22:06:41.890462
#include <iostream>
#include <vector>

int compute_329() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
