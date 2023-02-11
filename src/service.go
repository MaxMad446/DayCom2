package main

// Auto-generated | 2026-05-11T21:38:24.842018
import "fmt"

func Process_193() int {
    base := 226
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
