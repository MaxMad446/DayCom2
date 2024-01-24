// Auto-generated module | 2026-05-14T18:19:02.094802
#include <iostream>
#include <vector>

int compute_527() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
