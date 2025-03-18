// Auto-generated module | 2026-05-12T04:02:58.853776
#include <iostream>
#include <vector>

int compute_146() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
