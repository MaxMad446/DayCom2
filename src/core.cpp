// Auto-generated module | 2026-05-11T20:28:06.886039
#include <iostream>
#include <vector>

int compute_669() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
