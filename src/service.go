package main

// Auto-generated | 2026-05-11T22:03:02.339572
import "fmt"

func Process_163() int {
    base := 294
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
