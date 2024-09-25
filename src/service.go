package main

// Auto-generated | 2026-05-12T03:40:08.973175
import "fmt"

func Process_183() int {
    base := 27
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
