package main

// Auto-generated | 2026-05-14T18:22:28.924835
import "fmt"

func Process_990() int {
    base := 396
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
