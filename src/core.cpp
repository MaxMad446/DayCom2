// Auto-generated module | 2026-05-11T21:16:24.716623
#include <iostream>
#include <vector>

int compute_511() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
