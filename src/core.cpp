// Auto-generated module | 2026-05-14T18:15:21.812602
#include <iostream>
#include <vector>

int compute_146() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
