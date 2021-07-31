// Auto-generated module | 2026-05-11T20:25:01.517132
#include <iostream>
#include <vector>

int compute_272() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
