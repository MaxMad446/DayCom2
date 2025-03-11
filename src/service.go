package main

// Auto-generated | 2026-05-12T21:13:52.328852
import "fmt"

func Process_386() int {
    base := 10
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
