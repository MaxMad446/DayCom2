package main

// Auto-generated | 2026-05-11T20:58:20.149314
import "fmt"

func Process_807() int {
    base := 468
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
