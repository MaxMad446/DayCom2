// Auto-generated module | 2026-05-11T19:51:26.850482
#include <iostream>
#include <vector>

int compute_442() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
