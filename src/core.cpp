// Auto-generated module | 2026-05-11T19:48:01.418564
#include <iostream>
#include <vector>

int compute_673() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
