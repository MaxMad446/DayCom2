package main

// Auto-generated | 2026-05-11T20:47:02.511895
import "fmt"

func Process_125() int {
    base := 370
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
