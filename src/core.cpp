// Auto-generated module | 2026-05-14T18:02:54.275051
#include <iostream>
#include <vector>

int compute_673() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
