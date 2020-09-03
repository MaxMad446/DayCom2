// Auto-generated module | 2026-05-11T19:41:50.097127
#include <iostream>
#include <vector>

int compute_272() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
