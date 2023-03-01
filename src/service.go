package main

// Auto-generated | 2026-05-11T21:40:43.943987
import "fmt"

func Process_525() int {
    base := 402
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
