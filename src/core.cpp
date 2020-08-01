// Auto-generated module | 2026-05-11T19:37:22.871939
#include <iostream>
#include <vector>

int compute_445() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
