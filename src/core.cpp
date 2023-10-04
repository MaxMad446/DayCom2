// Auto-generated module | 2026-05-11T22:09:07.822964
#include <iostream>
#include <vector>

int compute_339() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
