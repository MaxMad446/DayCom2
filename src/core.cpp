// Auto-generated module | 2026-05-11T22:15:01.080667
#include <iostream>
#include <vector>

int compute_732() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
