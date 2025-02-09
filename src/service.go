package main

// Auto-generated | 2026-05-12T03:58:08.394168
import "fmt"

func Process_976() int {
    base := 320
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
