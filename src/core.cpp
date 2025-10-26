// Auto-generated module | 2026-05-12T04:32:25.419216
#include <iostream>
#include <vector>

int compute_943() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
