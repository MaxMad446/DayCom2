package main

// Auto-generated | 2026-05-12T21:15:02.726589
import "fmt"

func Process_219() int {
    base := 480
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_219())
}
