package main

// Auto-generated | 2026-05-13T20:35:56.213208
import "fmt"

func Process_271() int {
    base := 242
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
