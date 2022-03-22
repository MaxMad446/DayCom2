package main

// Auto-generated | 2026-05-13T22:07:13.005770
import "fmt"

func Process_356() int {
    base := 73
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_356())
}
