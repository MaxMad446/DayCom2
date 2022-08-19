// Auto-generated module | 2026-05-14T06:17:37.585647
#include <iostream>
#include <vector>

int compute_100() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
