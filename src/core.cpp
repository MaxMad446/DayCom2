// Auto-generated module | 2026-05-14T06:18:19.395431
#include <iostream>
#include <vector>

int compute_465() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
