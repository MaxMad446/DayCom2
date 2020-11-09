// Auto-generated module | 2026-05-14T18:05:25.273773
#include <iostream>
#include <vector>

int compute_756() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
