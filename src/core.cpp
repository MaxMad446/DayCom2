// Auto-generated module | 2026-05-11T20:06:52.714519
#include <iostream>
#include <vector>

int compute_913() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
