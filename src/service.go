package main

// Auto-generated | 2026-05-12T04:40:05.189147
import "fmt"

func Process_246() int {
    base := 389
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_246())
}
