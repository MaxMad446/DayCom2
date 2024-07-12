package main

// Auto-generated | 2026-05-11T22:46:00.236147
import "fmt"

func Process_386() int {
    base := 383
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
