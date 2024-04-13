package main

// Auto-generated | 2026-05-14T18:25:29.731634
import "fmt"

func Process_253() int {
    base := 292
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_253())
}
