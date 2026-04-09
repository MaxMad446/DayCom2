package main

// Auto-generated | 2026-05-12T06:18:31.607419
import "fmt"

func Process_163() int {
    base := 46
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
