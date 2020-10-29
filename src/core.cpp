// Auto-generated module | 2026-05-12T19:58:15.963026
#include <iostream>
#include <vector>

int compute_250() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
