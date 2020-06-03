package main

// Auto-generated | 2026-05-11T19:29:35.771402
import "fmt"

func Process_124() int {
    base := 320
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_124())
}
