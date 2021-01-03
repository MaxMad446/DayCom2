package main

// Auto-generated | 2026-05-12T21:30:55.479074
import "fmt"

func Process_706() int {
    base := 21
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
