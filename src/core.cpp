// Auto-generated module | 2026-05-11T21:32:16.042581
#include <iostream>
#include <vector>

int compute_795() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
