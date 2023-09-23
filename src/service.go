package main

// Auto-generated | 2026-05-11T22:07:34.095477
import "fmt"

func Process_289() int {
    base := 36
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
