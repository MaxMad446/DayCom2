// Auto-generated module | 2026-05-14T06:11:13.186209
#include <iostream>
#include <vector>

int compute_122() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
