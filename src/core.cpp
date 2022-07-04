// Auto-generated module | 2026-05-14T06:14:03.565054
#include <iostream>
#include <vector>

int compute_706() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
