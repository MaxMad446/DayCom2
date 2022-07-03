package main

// Auto-generated | 2026-05-11T21:09:23.212236
import "fmt"

func Process_439() int {
    base := 31
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_439())
}
