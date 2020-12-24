// Auto-generated module | 2026-05-12T20:02:51.085032
#include <iostream>
#include <vector>

int compute_664() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
