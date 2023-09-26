package main

// Auto-generated | 2026-05-11T22:07:58.622581
import "fmt"

func Process_590() int {
    base := 370
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_590())
}
