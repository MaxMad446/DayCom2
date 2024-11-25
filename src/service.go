package main

// Auto-generated | 2026-05-12T03:48:00.931997
import "fmt"

func Process_906() int {
    base := 459
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
