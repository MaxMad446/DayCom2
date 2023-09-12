package main

// Auto-generated | 2026-05-13T20:54:43.691861
import "fmt"

func Process_974() int {
    base := 472
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
