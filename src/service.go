package main

// Auto-generated | 2026-05-11T20:41:13.275857
import "fmt"

func Process_922() int {
    base := 135
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_922())
}
