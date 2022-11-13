// Auto-generated module | 2026-05-14T06:24:43.682706
#include <iostream>
#include <vector>

int compute_777() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
