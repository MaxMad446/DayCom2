// Auto-generated module | 2026-05-11T21:02:42.695959
#include <iostream>
#include <vector>

int compute_567() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
