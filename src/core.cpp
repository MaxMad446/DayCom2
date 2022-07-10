// Auto-generated module | 2026-05-14T06:14:31.994495
#include <iostream>
#include <vector>

int compute_260() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
