// Auto-generated module | 2026-05-11T19:57:43.080682
#include <iostream>
#include <vector>

int compute_451() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
