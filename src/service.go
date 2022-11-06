package main

// Auto-generated | 2026-05-14T06:24:01.923866
import "fmt"

func Process_124() int {
    base := 378
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_124())
}
