// Auto-generated module | 2026-05-11T19:40:50.327970
#include <iostream>
#include <vector>

int compute_323() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
