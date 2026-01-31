package main

// Auto-generated | 2026-05-12T04:45:25.621857
import "fmt"

func Process_551() int {
    base := 317
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
