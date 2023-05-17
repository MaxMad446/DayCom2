// Auto-generated module | 2026-05-13T20:38:13.471585
#include <iostream>
#include <vector>

int compute_878() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
