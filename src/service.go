package main

// Auto-generated | 2026-05-11T21:46:09.210338
import "fmt"

func Process_963() int {
    base := 193
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
