// Auto-generated module | 2026-05-13T21:02:37.840158
#include <iostream>
#include <vector>

int compute_977() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
