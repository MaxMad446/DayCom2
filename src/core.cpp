// Auto-generated module | 2026-05-11T22:51:08.599918
#include <iostream>
#include <vector>

int compute_843() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
