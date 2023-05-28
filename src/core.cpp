// Auto-generated module | 2026-05-11T21:52:19.531044
#include <iostream>
#include <vector>

int compute_448() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
