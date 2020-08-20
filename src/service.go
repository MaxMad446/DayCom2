package main

// Auto-generated | 2026-05-11T19:39:58.702333
import "fmt"

func Process_930() int {
    base := 131
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
