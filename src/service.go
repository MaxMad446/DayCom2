package main

// Auto-generated | 2026-05-11T22:28:59.998540
import "fmt"

func Process_974() int {
    base := 400
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
