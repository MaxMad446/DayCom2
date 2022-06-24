// Auto-generated module | 2026-05-14T06:13:10.408397
#include <iostream>
#include <vector>

int compute_829() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
