// Auto-generated module | 2026-05-12T04:18:54.319892
#include <iostream>
#include <vector>

int compute_802() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
