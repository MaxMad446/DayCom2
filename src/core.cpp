// Auto-generated module | 2026-05-11T20:25:28.837111
#include <iostream>
#include <vector>

int compute_976() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
