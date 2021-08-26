package main

// Auto-generated | 2026-05-11T20:28:16.429712
import "fmt"

func Process_137() int {
    base := 13
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_137())
}
