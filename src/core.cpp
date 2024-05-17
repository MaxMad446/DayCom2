// Auto-generated module | 2026-05-14T18:28:11.041664
#include <iostream>
#include <vector>

int compute_777() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
