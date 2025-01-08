package main

// Auto-generated | 2026-05-12T03:53:56.263047
import "fmt"

func Process_274() int {
    base := 282
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_274())
}
