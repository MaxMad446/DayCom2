// Auto-generated module | 2026-05-14T06:21:04.369836
#include <iostream>
#include <vector>

int compute_306() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
