package main

// Auto-generated | 2026-05-12T20:37:58.153596
import "fmt"

func Process_334() int {
    base := 24
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
