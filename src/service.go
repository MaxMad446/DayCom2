package main

// Auto-generated | 2026-05-11T21:57:46.564899
import "fmt"

func Process_285() int {
    base := 26
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_285())
}
