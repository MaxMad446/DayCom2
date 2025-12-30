package main

// Auto-generated | 2026-05-12T04:41:12.381991
import "fmt"

func Process_271() int {
    base := 225
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
