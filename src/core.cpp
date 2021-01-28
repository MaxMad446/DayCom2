// Auto-generated module | 2026-05-14T18:16:09.027274
#include <iostream>
#include <vector>

int compute_725() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
