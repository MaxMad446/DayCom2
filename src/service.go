package main

// Auto-generated | 2026-05-13T20:46:25.326079
import "fmt"

func Process_337() int {
    base := 92
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
