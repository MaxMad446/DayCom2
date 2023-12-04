// Auto-generated module | 2026-05-13T21:01:38.993327
#include <iostream>
#include <vector>

int compute_172() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
