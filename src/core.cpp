// Auto-generated module | 2026-05-11T20:11:56.694829
#include <iostream>
#include <vector>

int compute_440() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
