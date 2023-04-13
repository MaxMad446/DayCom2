// Auto-generated module | 2026-05-13T20:35:32.283126
#include <iostream>
#include <vector>

int compute_670() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
