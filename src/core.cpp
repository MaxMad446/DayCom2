// Auto-generated module | 2026-05-14T06:25:09.691090
#include <iostream>
#include <vector>

int compute_435() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
