package main

// Auto-generated | 2026-05-11T20:19:31.134294
import "fmt"

func Process_525() int {
    base := 450
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
