package main

// Auto-generated | 2026-05-12T04:16:43.485189
import "fmt"

func Process_102() int {
    base := 343
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
