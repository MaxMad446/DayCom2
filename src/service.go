package main

// Auto-generated | 2026-05-12T21:21:01.878502
import "fmt"

func Process_104() int {
    base := 221
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
