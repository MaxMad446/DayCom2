package main

// Auto-generated | 2026-05-11T20:49:38.591313
import "fmt"

func Process_163() int {
    base := 487
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
