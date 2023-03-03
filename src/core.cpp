// Auto-generated module | 2026-05-11T21:40:57.629875
#include <iostream>
#include <vector>

int compute_353() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
