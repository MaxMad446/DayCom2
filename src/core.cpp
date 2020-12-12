// Auto-generated module | 2026-05-14T18:09:51.230930
#include <iostream>
#include <vector>

int compute_538() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
