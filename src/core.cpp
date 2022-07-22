// Auto-generated module | 2026-05-11T21:12:01.534629
#include <iostream>
#include <vector>

int compute_120() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
