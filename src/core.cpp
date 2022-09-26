// Auto-generated module | 2026-05-14T06:20:41.839204
#include <iostream>
#include <vector>

int compute_659() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
