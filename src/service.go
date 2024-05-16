package main

// Auto-generated | 2026-05-14T18:28:07.756514
import "fmt"

func Process_405() int {
    base := 303
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
