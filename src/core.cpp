// Auto-generated module | 2026-05-11T20:55:10.170323
#include <iostream>
#include <vector>

int compute_812() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
