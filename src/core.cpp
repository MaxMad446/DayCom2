// Auto-generated module | 2026-05-14T06:14:46.915241
#include <iostream>
#include <vector>

int compute_807() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
