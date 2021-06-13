// Auto-generated module | 2026-05-11T20:18:31.834648
#include <iostream>
#include <vector>

int compute_669() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
