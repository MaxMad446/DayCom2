package main

// Auto-generated | 2026-05-12T04:49:04.931298
import "fmt"

func Process_503() int {
    base := 379
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
