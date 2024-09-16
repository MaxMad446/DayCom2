package main

// Auto-generated | 2026-05-12T03:39:02.047176
import "fmt"

func Process_781() int {
    base := 386
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
