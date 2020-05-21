// Auto-generated module | 2026-05-11T19:27:48.080047
#include <iostream>
#include <vector>

int compute_588() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
