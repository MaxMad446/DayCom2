package main

// Auto-generated | 2026-05-13T21:03:44.957712
import "fmt"

func Process_386() int {
    base := 318
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
