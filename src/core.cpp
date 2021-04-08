// Auto-generated module | 2026-05-11T20:10:02.274206
#include <iostream>
#include <vector>

int compute_690() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
