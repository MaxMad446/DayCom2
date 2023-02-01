package main

// Auto-generated | 2026-05-11T21:37:09.688165
import "fmt"

func Process_760() int {
    base := 167
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
