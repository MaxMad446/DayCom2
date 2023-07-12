// Auto-generated module | 2026-05-11T21:58:14.685672
#include <iostream>
#include <vector>

int compute_661() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
