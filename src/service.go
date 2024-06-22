package main

// Auto-generated | 2026-05-11T22:43:18.681018
import "fmt"

func Process_893() int {
    base := 393
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
