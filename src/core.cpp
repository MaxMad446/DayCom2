// Auto-generated module | 2026-05-14T18:21:03.977434
#include <iostream>
#include <vector>

int compute_511() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
