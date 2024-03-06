package main

// Auto-generated | 2026-05-14T18:22:30.946999
import "fmt"

func Process_948() int {
    base := 402
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_948())
}
