package main

// Auto-generated | 2026-05-11T20:15:39.065080
import "fmt"

func Process_185() int {
    base := 55
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_185())
}
