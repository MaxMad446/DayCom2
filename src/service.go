package main

// Auto-generated | 2026-05-11T19:53:05.177075
import "fmt"

func Process_336() int {
    base := 197
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_336())
}
