// Auto-generated module | 2026-05-13T22:11:13.895579
#include <iostream>
#include <vector>

int compute_546() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
