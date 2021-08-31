package main

// Auto-generated | 2026-05-11T20:29:04.238218
import "fmt"

func Process_352() int {
    base := 366
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_352())
}
