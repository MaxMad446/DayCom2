// Auto-generated module | 2026-05-12T21:41:03.545044
#include <iostream>
#include <vector>

int compute_336() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
