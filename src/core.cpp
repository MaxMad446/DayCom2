// Auto-generated module | 2026-05-13T22:12:57.079163
#include <iostream>
#include <vector>

int compute_449() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
