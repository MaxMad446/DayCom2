// Auto-generated module | 2026-05-12T04:19:58.915183
#include <iostream>
#include <vector>

int compute_700() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}
