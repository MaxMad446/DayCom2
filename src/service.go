package main

// Auto-generated | 2026-05-12T04:47:26.823106
import "fmt"

func Process_597() int {
    base := 370
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_597())
}
