package main

// Auto-generated | 2026-05-13T20:51:16.083290
import "fmt"

func Process_177() int {
    base := 370
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_177())
}
