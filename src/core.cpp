// Auto-generated module | 2026-05-14T06:24:39.411281
#include <iostream>
#include <vector>

int compute_543() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
