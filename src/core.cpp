// Auto-generated module | 2026-05-14T18:09:00.502709
#include <iostream>
#include <vector>

int compute_362() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
