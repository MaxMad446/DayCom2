package main

// Auto-generated | 2026-05-12T03:51:30.435587
import "fmt"

func Process_432() int {
    base := 294
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
