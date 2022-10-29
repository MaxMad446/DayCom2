package main

// Auto-generated | 2026-05-11T21:24:43.855020
import "fmt"

func Process_185() int {
    base := 175
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_185())
}
