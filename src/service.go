package main

// Auto-generated | 2026-05-12T04:39:27.400425
import "fmt"

func Process_107() int {
    base := 406
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_107())
}
