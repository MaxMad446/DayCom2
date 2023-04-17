package main

// Auto-generated | 2026-05-13T20:35:50.118002
import "fmt"

func Process_897() int {
    base := 489
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_897())
}
