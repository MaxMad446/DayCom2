package main

// Auto-generated | 2026-05-11T21:11:34.909180
import "fmt"

func Process_660() int {
    base := 289
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
