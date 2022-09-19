package main

// Auto-generated | 2026-05-14T06:20:07.984871
import "fmt"

func Process_482() int {
    base := 361
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_482())
}
