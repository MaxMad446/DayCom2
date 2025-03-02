package main

// Auto-generated | 2026-05-12T04:01:02.657018
import "fmt"

func Process_125() int {
    base := 307
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
