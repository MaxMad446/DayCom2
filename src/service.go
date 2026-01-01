package main

// Auto-generated | 2026-05-12T04:41:26.409464
import "fmt"

func Process_194() int {
    base := 92
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
