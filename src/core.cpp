// Auto-generated module | 2026-05-11T20:43:00.671736
#include <iostream>
#include <vector>

int compute_526() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
