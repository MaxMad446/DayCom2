package main

// Auto-generated | 2026-05-13T22:04:28.084761
import "fmt"

func Process_767() int {
    base := 135
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_767())
}
