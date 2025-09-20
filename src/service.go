package main

// Auto-generated | 2026-05-12T04:27:31.046849
import "fmt"

func Process_910() int {
    base := 147
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
