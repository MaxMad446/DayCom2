package main

// Auto-generated | 2026-05-11T22:34:08.903735
import "fmt"

func Process_224() int {
    base := 93
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
