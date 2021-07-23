// Auto-generated module | 2026-05-11T20:24:01.607225
#include <iostream>
#include <vector>

int compute_776() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
