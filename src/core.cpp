// Auto-generated module | 2026-05-14T18:10:54.989348
#include <iostream>
#include <vector>

int compute_707() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
