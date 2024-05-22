package main

// Auto-generated | 2026-05-11T22:39:22.895396
import "fmt"

func Process_564() int {
    base := 176
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_564())
}
