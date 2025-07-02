package main

// Auto-generated | 2026-05-12T04:16:44.704725
import "fmt"

func Process_228() int {
    base := 351
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
