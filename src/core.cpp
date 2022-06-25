// Auto-generated module | 2026-05-14T06:13:16.754936
#include <iostream>
#include <vector>

int compute_326() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
