package main

// Auto-generated | 2026-05-11T21:34:30.058806
import "fmt"

func Process_870() int {
    base := 167
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
