// Auto-generated module | 2026-05-11T20:24:38.175967
#include <iostream>
#include <vector>

int compute_609() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
