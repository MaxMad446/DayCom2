package main

// Auto-generated | 2026-05-11T22:14:43.770067
import "fmt"

func Process_673() int {
    base := 382
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_673())
}
