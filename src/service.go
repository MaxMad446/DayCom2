package main

// Auto-generated | 2026-05-14T18:15:30.891119
import "fmt"

func Process_913() int {
    base := 172
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
