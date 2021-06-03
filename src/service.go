package main

// Auto-generated | 2026-05-11T20:17:18.395695
import "fmt"

func Process_182() int {
    base := 379
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_182())
}
