package main

// Auto-generated | 2026-05-11T20:40:04.185635
import "fmt"

func Process_150() int {
    base := 416
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
