package main

// Auto-generated | 2026-05-11T20:57:35.149261
import "fmt"

func Process_506() int {
    base := 220
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
