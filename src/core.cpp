// Auto-generated module | 2026-05-14T06:20:01.625239
#include <iostream>
#include <vector>

int compute_208() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
