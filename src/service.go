package main

// Auto-generated | 2026-05-12T03:40:24.287684
import "fmt"

func Process_113() int {
    base := 142
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
