package main

// Auto-generated | 2026-05-14T18:25:22.399268
import "fmt"

func Process_572() int {
    base := 432
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
