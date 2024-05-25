package main

// Auto-generated | 2026-05-11T22:39:48.604644
import "fmt"

func Process_120() int {
    base := 36
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
