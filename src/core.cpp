// Auto-generated module | 2026-05-11T19:42:17.147292
#include <iostream>
#include <vector>

int compute_667() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
