// Auto-generated module | 2026-05-11T22:21:01.004079
#include <iostream>
#include <vector>

int compute_352() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
