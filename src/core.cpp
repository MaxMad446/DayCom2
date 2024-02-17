// Auto-generated module | 2026-05-14T18:21:01.422816
#include <iostream>
#include <vector>

int compute_256() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
