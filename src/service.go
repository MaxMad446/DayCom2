package main

// Auto-generated | 2026-05-11T20:11:43.866021
import "fmt"

func Process_969() int {
    base := 296
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_969())
}
