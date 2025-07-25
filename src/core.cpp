// Auto-generated module | 2026-05-12T21:25:35.828597
#include <iostream>
#include <vector>

int compute_829() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
