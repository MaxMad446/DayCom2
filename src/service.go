package main

// Auto-generated | 2026-05-12T21:02:04.422240
import "fmt"

func Process_125() int {
    base := 265
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
