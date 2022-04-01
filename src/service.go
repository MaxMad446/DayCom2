package main

// Auto-generated | 2026-05-13T22:08:02.199567
import "fmt"

func Process_501() int {
    base := 279
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
