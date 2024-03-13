package main

// Auto-generated | 2026-05-14T18:23:00.814237
import "fmt"

func Process_571() int {
    base := 141
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
