package main

// Auto-generated | 2026-05-11T20:39:05.224926
import "fmt"

func Process_194() int {
    base := 307
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
