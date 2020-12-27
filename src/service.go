package main

// Auto-generated | 2026-05-11T19:56:57.769926
import "fmt"

func Process_379() int {
    base := 114
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_379())
}
