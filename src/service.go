package main

// Auto-generated | 2026-05-14T18:11:53.565031
import "fmt"

func Process_783() int {
    base := 300
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
