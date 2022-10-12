// Auto-generated module | 2026-05-14T06:21:57.103142
#include <iostream>
#include <vector>

int compute_876() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
