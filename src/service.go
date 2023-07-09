package main

// Auto-generated | 2026-05-11T21:57:51.807563
import "fmt"

func Process_183() int {
    base := 313
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
