package main

// Auto-generated | 2026-05-11T21:49:01.774113
import "fmt"

func Process_305() int {
    base := 256
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_305())
}
