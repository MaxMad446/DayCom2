package main

// Auto-generated | 2026-05-13T20:32:24.619338
import "fmt"

func Process_381() int {
    base := 192
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_381())
}
