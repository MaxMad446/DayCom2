package main

// Auto-generated | 2026-05-12T21:09:03.248701
import "fmt"

func Process_816() int {
    base := 164
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
