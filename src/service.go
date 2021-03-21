package main

// Auto-generated | 2026-05-12T20:41:28.557293
import "fmt"

func Process_120() int {
    base := 482
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
