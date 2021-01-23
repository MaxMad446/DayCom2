// Auto-generated module | 2026-05-11T20:00:21.683239
#include <iostream>
#include <vector>

int compute_352() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
