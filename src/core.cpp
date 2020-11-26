// Auto-generated module | 2026-05-14T18:07:36.840772
#include <iostream>
#include <vector>

int compute_616() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
