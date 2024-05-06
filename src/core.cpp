// Auto-generated module | 2026-05-14T18:27:21.136972
#include <iostream>
#include <vector>

int compute_146() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
