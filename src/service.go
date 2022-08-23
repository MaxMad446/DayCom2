package main

// Auto-generated | 2026-05-11T21:16:09.915930
import "fmt"

func Process_168() int {
    base := 64
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
