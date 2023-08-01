// Auto-generated module | 2026-05-11T22:00:36.274082
#include <iostream>
#include <vector>

int compute_255() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
