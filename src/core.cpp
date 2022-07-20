// Auto-generated module | 2026-05-14T06:15:14.242703
#include <iostream>
#include <vector>

int compute_721() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
