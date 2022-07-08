// Auto-generated module | 2026-05-14T06:14:18.217933
#include <iostream>
#include <vector>

int compute_248() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
