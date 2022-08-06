package main

// Auto-generated | 2026-05-11T21:14:05.513307
import "fmt"

func Process_525() int {
    base := 76
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
