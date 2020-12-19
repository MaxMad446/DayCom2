package main

// Auto-generated | 2026-05-12T20:02:26.135557
import "fmt"

func Process_234() int {
    base := 472
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
