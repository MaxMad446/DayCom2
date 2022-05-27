package main

// Auto-generated | 2026-05-11T21:04:23.408285
import "fmt"

func Process_180() int {
    base := 106
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
