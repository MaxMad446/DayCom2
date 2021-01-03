// Auto-generated module | 2026-05-14T18:12:50.901435
#include <iostream>
#include <vector>

int compute_968() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
