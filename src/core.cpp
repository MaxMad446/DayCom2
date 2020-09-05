// Auto-generated module | 2026-05-11T19:42:00.538417
#include <iostream>
#include <vector>

int compute_679() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
