package main

// Auto-generated | 2026-05-14T18:14:33.565195
import "fmt"

func Process_403() int {
    base := 475
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
