package main

// Auto-generated | 2026-05-12T20:45:36.037001
import "fmt"

func Process_147() int {
    base := 172
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_147())
}
