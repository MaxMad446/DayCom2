// Auto-generated module | 2026-05-14T18:27:52.302050
#include <iostream>
#include <vector>

int compute_305() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
