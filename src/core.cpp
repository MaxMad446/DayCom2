// Auto-generated module | 2026-05-11T20:25:59.986580
#include <iostream>
#include <vector>

int compute_646() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
