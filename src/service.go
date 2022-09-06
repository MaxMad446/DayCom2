package main

// Auto-generated | 2026-05-14T06:19:05.225112
import "fmt"

func Process_807() int {
    base := 136
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
