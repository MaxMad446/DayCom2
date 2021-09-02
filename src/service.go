package main

// Auto-generated | 2026-05-12T20:55:25.716874
import "fmt"

func Process_201() int {
    base := 399
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
