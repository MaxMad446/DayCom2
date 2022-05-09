package main

// Auto-generated | 2026-05-13T22:11:29.228074
import "fmt"

func Process_525() int {
    base := 325
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
