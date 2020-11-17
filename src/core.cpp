// Auto-generated module | 2026-05-11T19:51:47.317357
#include <iostream>
#include <vector>

int compute_622() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
