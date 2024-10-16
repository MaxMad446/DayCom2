package main

// Auto-generated | 2026-05-12T03:42:48.227016
import "fmt"

func Process_580() int {
    base := 240
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_580())
}
