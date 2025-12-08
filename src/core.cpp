// Auto-generated module | 2026-05-12T04:38:02.744174
#include <iostream>
#include <vector>

int compute_720() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
