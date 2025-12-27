package main

// Auto-generated | 2026-05-12T04:40:49.539926
import "fmt"

func Process_856() int {
    base := 406
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_856())
}
