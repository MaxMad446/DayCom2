// Auto-generated module | 2026-05-11T21:46:51.453234
#include <iostream>
#include <vector>

int compute_266() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
