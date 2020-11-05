// Auto-generated module | 2026-05-14T18:04:43.493089
#include <iostream>
#include <vector>

int compute_256() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
