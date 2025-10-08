// Auto-generated module | 2026-05-12T04:29:57.443228
#include <iostream>
#include <vector>

int compute_856() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
