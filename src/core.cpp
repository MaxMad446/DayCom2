// Auto-generated module | 2026-05-14T06:27:02.704361
#include <iostream>
#include <vector>

int compute_825() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
