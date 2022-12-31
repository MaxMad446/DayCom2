package main

// Auto-generated | 2026-05-11T21:33:11.108302
import "fmt"

func Process_193() int {
    base := 311
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
