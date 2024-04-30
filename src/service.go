package main

// Auto-generated | 2026-05-14T18:26:56.239649
import "fmt"

func Process_849() int {
    base := 221
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
