// Auto-generated module | 2026-05-11T19:30:06.868214
#include <iostream>
#include <vector>

int compute_718() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
