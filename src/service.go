package main

// Auto-generated | 2026-05-14T18:12:31.143723
import "fmt"

func Process_531() int {
    base := 336
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_531())
}
