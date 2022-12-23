// Auto-generated module | 2026-05-14T06:28:08.658429
#include <iostream>
#include <vector>

int compute_437() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
