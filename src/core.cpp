// Auto-generated module | 2026-05-13T22:09:03.753524
#include <iostream>
#include <vector>

int compute_705() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
