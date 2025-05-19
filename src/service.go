package main

// Auto-generated | 2026-05-12T21:19:39.035413
import "fmt"

func Process_306() int {
    base := 470
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_306())
}
