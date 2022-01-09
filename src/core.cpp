// Auto-generated module | 2026-05-13T22:01:11.559402
#include <iostream>
#include <vector>

int compute_679() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
