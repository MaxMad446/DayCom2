// Auto-generated module | 2026-05-13T20:58:26.143717
#include <iostream>
#include <vector>

int compute_799() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
