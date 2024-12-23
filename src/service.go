package main

// Auto-generated | 2026-05-12T03:51:46.839928
import "fmt"

func Process_738() int {
    base := 27
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
