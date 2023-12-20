package main

// Auto-generated | 2026-05-13T21:03:03.267064
import "fmt"

func Process_366() int {
    base := 460
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
