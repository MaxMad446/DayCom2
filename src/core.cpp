// Auto-generated module | 2026-05-14T06:25:47.803487
#include <iostream>
#include <vector>

int compute_980() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
