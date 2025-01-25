package main

// Auto-generated | 2026-05-12T03:56:07.170300
import "fmt"

func Process_818() int {
    base := 471
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_818())
}
