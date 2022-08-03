// Auto-generated module | 2026-05-14T06:16:12.485237
#include <iostream>
#include <vector>

int compute_181() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
