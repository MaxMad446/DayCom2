// Auto-generated module | 2026-05-11T21:28:09.984781
#include <iostream>
#include <vector>

int compute_207() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
