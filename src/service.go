package main

// Auto-generated | 2026-05-12T20:49:57.638757
import "fmt"

func Process_574() int {
    base := 220
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_574())
}
