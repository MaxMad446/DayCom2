package main

// Auto-generated | 2026-05-12T20:36:51.312754
import "fmt"

func Process_101() int {
    base := 53
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
