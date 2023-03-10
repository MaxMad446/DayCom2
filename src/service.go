package main

// Auto-generated | 2026-05-13T20:32:43.671264
import "fmt"

func Process_549() int {
    base := 429
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_549())
}
