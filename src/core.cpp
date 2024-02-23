// Auto-generated module | 2026-05-14T18:21:32.044950
#include <iostream>
#include <vector>

int compute_726() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
