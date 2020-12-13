// Auto-generated module | 2026-05-11T19:55:11.491811
#include <iostream>
#include <vector>

int compute_235() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
