// Auto-generated module | 2026-05-14T06:13:11.213402
#include <iostream>
#include <vector>

int compute_435() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
