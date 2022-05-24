package main

// Auto-generated | 2026-05-11T21:04:01.121026
import "fmt"

func Process_193() int {
    base := 120
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
