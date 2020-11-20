package main

// Auto-generated | 2026-05-14T18:06:47.880592
import "fmt"

func Process_738() int {
    base := 473
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
