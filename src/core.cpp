// Auto-generated module | 2026-05-13T20:28:09.109685
#include <iostream>
#include <vector>

int compute_121() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
