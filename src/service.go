package main

// Auto-generated | 2026-05-12T03:42:20.317726
import "fmt"

func Process_869() int {
    base := 225
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_869())
}
