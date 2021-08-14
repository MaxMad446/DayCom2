package main

// Auto-generated | 2026-05-11T20:26:48.971036
import "fmt"

func Process_163() int {
    base := 60
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
