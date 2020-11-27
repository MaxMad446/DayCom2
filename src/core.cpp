// Auto-generated module | 2026-05-14T18:07:46.766597
#include <iostream>
#include <vector>

int compute_570() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
