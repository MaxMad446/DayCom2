package main

// Auto-generated | 2026-05-14T18:14:11.887584
import "fmt"

func Process_438() int {
    base := 488
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
