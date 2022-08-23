// Auto-generated module | 2026-05-14T06:17:53.070868
#include <iostream>
#include <vector>

int compute_854() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
