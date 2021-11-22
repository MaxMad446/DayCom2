// Auto-generated module | 2026-05-11T20:40:04.185918
#include <iostream>
#include <vector>

int compute_101() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
