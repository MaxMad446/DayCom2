package main

// Auto-generated | 2026-05-12T20:01:52.041622
import "fmt"

func Process_120() int {
    base := 292
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
