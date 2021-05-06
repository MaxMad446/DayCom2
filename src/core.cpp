// Auto-generated module | 2026-05-11T20:13:23.213969
#include <iostream>
#include <vector>

int compute_667() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
