// Auto-generated module | 2026-05-14T18:23:51.875703
#include <iostream>
#include <vector>

int compute_952() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
