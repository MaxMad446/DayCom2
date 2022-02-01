package main

// Auto-generated | 2026-05-13T22:03:02.461349
import "fmt"

func Process_345() int {
    base := 121
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
