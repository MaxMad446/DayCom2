// Auto-generated module | 2026-05-14T18:08:08.769661
#include <iostream>
#include <vector>

int compute_597() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
