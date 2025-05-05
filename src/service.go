package main

// Auto-generated | 2026-05-12T04:09:16.309130
import "fmt"

func Process_104() int {
    base := 389
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
