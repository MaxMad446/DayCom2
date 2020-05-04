// Auto-generated module | 2026-05-11T19:25:58.926650
#include <iostream>
#include <vector>

int compute_172() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
