// Auto-generated module | 2026-05-11T21:21:28.793109
#include <iostream>
#include <vector>

int compute_120() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
