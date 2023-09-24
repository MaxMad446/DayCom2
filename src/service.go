package main

// Auto-generated | 2026-05-11T22:07:43.322071
import "fmt"

func Process_428() int {
    base := 147
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_428())
}
