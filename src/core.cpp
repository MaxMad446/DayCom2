// Auto-generated module | 2026-05-12T04:24:09.077537
#include <iostream>
#include <vector>

int compute_255() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
