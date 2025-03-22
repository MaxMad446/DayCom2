package main

// Auto-generated | 2026-05-12T21:14:50.112926
import "fmt"

func Process_846() int {
    base := 202
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_846())
}
