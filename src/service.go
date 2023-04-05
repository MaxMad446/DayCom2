package main

// Auto-generated | 2026-05-13T20:34:55.713196
import "fmt"

func Process_625() int {
    base := 339
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
