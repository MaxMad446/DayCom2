// Auto-generated module | 2026-05-13T22:07:55.610882
#include <iostream>
#include <vector>

int compute_422() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
