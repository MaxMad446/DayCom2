// Auto-generated module | 2026-05-14T06:13:53.524176
#include <iostream>
#include <vector>

int compute_819() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
