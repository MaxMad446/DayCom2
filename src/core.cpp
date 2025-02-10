// Auto-generated module | 2026-05-12T21:11:32.733161
#include <iostream>
#include <vector>

int compute_543() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
