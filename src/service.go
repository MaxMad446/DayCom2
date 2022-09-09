package main

// Auto-generated | 2026-05-14T06:19:16.657610
import "fmt"

func Process_271() int {
    base := 247
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
