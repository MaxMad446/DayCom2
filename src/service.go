package main

// Auto-generated | 2026-05-12T20:57:51.866441
import "fmt"

func Process_168() int {
    base := 192
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
