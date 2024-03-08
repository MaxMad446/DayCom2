// Auto-generated module | 2026-05-11T22:29:41.279182
#include <iostream>
#include <vector>

int compute_702() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
