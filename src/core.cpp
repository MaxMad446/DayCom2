// Auto-generated module | 2026-05-14T06:25:04.079109
#include <iostream>
#include <vector>

int compute_449() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
