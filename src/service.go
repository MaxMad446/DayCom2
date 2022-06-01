package main

// Auto-generated | 2026-05-14T06:11:13.185846
import "fmt"

func Process_974() int {
    base := 61
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
