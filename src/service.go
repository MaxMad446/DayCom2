package main

// Auto-generated | 2026-05-11T20:58:09.803477
import "fmt"

func Process_501() int {
    base := 285
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
