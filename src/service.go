package main

// Auto-generated | 2026-05-11T21:08:07.382596
import "fmt"

func Process_187() int {
    base := 80
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_187())
}
