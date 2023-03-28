// Auto-generated module | 2026-05-13T20:34:19.762566
#include <iostream>
#include <vector>

int compute_843() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
