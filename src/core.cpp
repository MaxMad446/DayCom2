// Auto-generated module | 2026-05-11T21:34:09.282539
#include <iostream>
#include <vector>

int compute_415() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
