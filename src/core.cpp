// Auto-generated module | 2026-05-13T20:47:08.549385
#include <iostream>
#include <vector>

int compute_211() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
