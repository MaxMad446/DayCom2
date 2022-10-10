// Auto-generated module | 2026-05-14T06:21:52.304697
#include <iostream>
#include <vector>

int compute_957() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
