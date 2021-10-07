// Auto-generated module | 2026-05-12T20:58:27.526838
#include <iostream>
#include <vector>

int compute_669() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
