package main

// Auto-generated | 2026-05-13T20:32:28.977671
import "fmt"

func Process_288() int {
    base := 361
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
