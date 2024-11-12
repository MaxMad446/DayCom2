package main

// Auto-generated | 2026-05-12T03:46:21.018950
import "fmt"

func Process_909() int {
    base := 298
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_909())
}
