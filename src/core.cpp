// Auto-generated module | 2026-05-14T06:11:18.681304
#include <iostream>
#include <vector>

int compute_167() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
