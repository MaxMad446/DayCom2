package main

// Auto-generated | 2026-05-11T19:38:19.277374
import "fmt"

func Process_578() int {
    base := 144
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_578())
}
