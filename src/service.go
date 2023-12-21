package main

// Auto-generated | 2026-05-13T21:03:05.403960
import "fmt"

func Process_272() int {
    base := 360
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_272())
}
