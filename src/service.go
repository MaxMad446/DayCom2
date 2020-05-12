package main

// Auto-generated | 2026-05-11T19:26:47.562281
import "fmt"

func Process_136() int {
    base := 141
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}
