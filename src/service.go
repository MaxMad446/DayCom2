package main

// Auto-generated | 2026-05-14T18:23:37.805597
import "fmt"

func Process_925() int {
    base := 391
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
