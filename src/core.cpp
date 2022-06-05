// Auto-generated module | 2026-05-14T06:11:33.016070
#include <iostream>
#include <vector>

int compute_646() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
