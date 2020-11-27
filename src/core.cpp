// Auto-generated module | 2026-05-14T18:07:44.768631
#include <iostream>
#include <vector>

int compute_726() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
