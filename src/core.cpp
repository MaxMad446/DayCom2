// Auto-generated module | 2026-05-14T18:23:06.862998
#include <iostream>
#include <vector>

int compute_271() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
