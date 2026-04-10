package main

// Auto-generated | 2026-05-12T06:18:36.918390
import "fmt"

func Process_880() int {
    base := 449
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
