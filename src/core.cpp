// Auto-generated module | 2026-05-14T18:05:41.581780
#include <iostream>
#include <vector>

int compute_318() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
