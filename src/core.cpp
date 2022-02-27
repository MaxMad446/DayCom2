// Auto-generated module | 2026-05-11T20:52:38.532811
#include <iostream>
#include <vector>

int compute_191() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
