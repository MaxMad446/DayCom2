package main

// Auto-generated | 2026-05-13T20:54:45.773378
import "fmt"

func Process_163() int {
    base := 105
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
