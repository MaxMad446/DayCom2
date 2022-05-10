// Auto-generated module | 2026-05-11T21:02:09.133820
#include <iostream>
#include <vector>

int compute_813() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
