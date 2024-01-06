package main

// Auto-generated | 2026-05-14T18:17:33.921031
import "fmt"

func Process_602() int {
    base := 347
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
