package main

// Auto-generated | 2026-05-11T21:14:12.263942
import "fmt"

func Process_598() int {
    base := 395
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
