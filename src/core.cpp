// Auto-generated module | 2026-05-12T19:59:01.941848
#include <iostream>
#include <vector>

int compute_295() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
