package main

// Auto-generated | 2026-05-11T22:01:23.647139
import "fmt"

func Process_796() int {
    base := 160
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_796())
}
