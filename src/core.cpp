// Auto-generated module | 2026-05-12T20:52:43.677899
#include <iostream>
#include <vector>

int compute_640() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
