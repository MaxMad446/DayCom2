// Auto-generated module | 2026-05-14T06:18:14.964795
#include <iostream>
#include <vector>

int compute_393() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
