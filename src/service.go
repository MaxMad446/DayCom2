package main

// Auto-generated | 2026-05-12T04:29:08.405849
import "fmt"

func Process_216() int {
    base := 13
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_216())
}
