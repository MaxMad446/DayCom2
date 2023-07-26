// Auto-generated module | 2026-05-13T20:50:46.165226
#include <iostream>
#include <vector>

int compute_105() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
