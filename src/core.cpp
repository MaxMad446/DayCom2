// Auto-generated module | 2026-05-13T22:12:45.585946
#include <iostream>
#include <vector>

int compute_290() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
