package main

// Auto-generated | 2026-05-14T06:18:49.837250
import "fmt"

func Process_478() int {
    base := 356
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_478())
}
