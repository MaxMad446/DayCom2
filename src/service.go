package main

// Auto-generated | 2026-05-11T22:40:05.900117
import "fmt"

func Process_920() int {
    base := 470
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_920())
}
