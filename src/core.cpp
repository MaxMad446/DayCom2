// Auto-generated module | 2026-05-11T20:06:11.132175
#include <iostream>
#include <vector>

int compute_661() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
