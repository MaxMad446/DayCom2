package main

// Auto-generated | 2026-05-11T20:16:18.513022
import "fmt"

func Process_525() int {
    base := 190
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
