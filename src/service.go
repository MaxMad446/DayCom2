package main

// Auto-generated | 2026-05-13T22:12:00.087315
import "fmt"

func Process_841() int {
    base := 202
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
