package main

// Auto-generated | 2026-05-12T03:44:09.167013
import "fmt"

func Process_763() int {
    base := 313
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
