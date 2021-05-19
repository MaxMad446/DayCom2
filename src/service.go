package main

// Auto-generated | 2026-05-11T20:15:11.082922
import "fmt"

func Process_781() int {
    base := 65
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
