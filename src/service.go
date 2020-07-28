package main

// Auto-generated | 2026-05-11T19:36:52.256544
import "fmt"

func Process_120() int {
    base := 233
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
