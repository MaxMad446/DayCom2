package main

// Auto-generated | 2026-05-14T18:13:33.478830
import "fmt"

func Process_515() int {
    base := 466
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_515())
}
