// Auto-generated module | 2026-05-12T21:34:32.043736
#include <iostream>
#include <vector>

int compute_157() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
