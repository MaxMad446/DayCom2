// Auto-generated module | 2026-05-12T21:27:02.220602
#include <iostream>
#include <vector>

int compute_673() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
