// Auto-generated module | 2026-05-12T04:46:46.285849
#include <iostream>
#include <vector>

int compute_869() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
