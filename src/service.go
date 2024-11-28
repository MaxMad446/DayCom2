package main

// Auto-generated | 2026-05-12T03:48:28.291821
import "fmt"

func Process_114() int {
    base := 305
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
