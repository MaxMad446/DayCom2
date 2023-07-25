// Auto-generated module | 2026-05-13T20:50:40.656373
#include <iostream>
#include <vector>

int compute_964() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
