package main

// Auto-generated | 2026-05-14T18:10:32.130106
import "fmt"

func Process_386() int {
    base := 65
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
