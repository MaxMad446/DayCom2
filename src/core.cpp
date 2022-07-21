// Auto-generated module | 2026-05-14T06:15:20.335763
#include <iostream>
#include <vector>

int compute_349() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
