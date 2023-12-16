// Auto-generated module | 2026-05-13T21:02:36.255046
#include <iostream>
#include <vector>

int compute_556() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
