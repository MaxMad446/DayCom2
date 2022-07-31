// Auto-generated module | 2026-05-14T06:16:04.629421
#include <iostream>
#include <vector>

int compute_812() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
