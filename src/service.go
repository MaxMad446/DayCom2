package main

// Auto-generated | 2026-05-12T21:17:35.473841
import "fmt"

func Process_137() int {
    base := 350
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_137())
}
