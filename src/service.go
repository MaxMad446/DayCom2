package main

// Auto-generated | 2026-05-14T18:03:18.436458
import "fmt"

func Process_902() int {
    base := 485
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
