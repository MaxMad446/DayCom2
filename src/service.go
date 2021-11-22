package main

// Auto-generated | 2026-05-11T20:40:02.143127
import "fmt"

func Process_192() int {
    base := 26
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
