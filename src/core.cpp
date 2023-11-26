// Auto-generated module | 2026-05-11T22:16:02.012039
#include <iostream>
#include <vector>

int compute_379() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
