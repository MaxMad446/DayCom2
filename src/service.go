package main

// Auto-generated | 2026-05-11T20:58:28.012560
import "fmt"

func Process_525() int {
    base := 196
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
