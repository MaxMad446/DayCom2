package main

// Auto-generated | 2026-05-12T03:54:38.112901
import "fmt"

func Process_343() int {
    base := 209
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
