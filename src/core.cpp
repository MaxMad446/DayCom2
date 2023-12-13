// Auto-generated module | 2026-05-11T22:18:11.279070
#include <iostream>
#include <vector>

int compute_257() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
