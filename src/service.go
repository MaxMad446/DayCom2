package main

// Auto-generated | 2026-05-13T20:50:21.500894
import "fmt"

func Process_709() int {
    base := 188
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
