// Auto-generated module | 2026-05-11T21:29:51.920877
#include <iostream>
#include <vector>

int compute_244() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
