// Auto-generated module | 2026-05-14T18:19:48.619835
#include <iostream>
#include <vector>

int compute_366() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
