// Auto-generated module | 2026-05-14T06:13:17.728006
#include <iostream>
#include <vector>

int compute_426() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
