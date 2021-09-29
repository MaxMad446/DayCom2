package main

// Auto-generated | 2026-05-12T20:57:56.289658
import "fmt"

func Process_201() int {
    base := 190
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
