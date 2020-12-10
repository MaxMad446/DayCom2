// Auto-generated module | 2026-05-11T19:54:41.564766
#include <iostream>
#include <vector>

int compute_985() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
