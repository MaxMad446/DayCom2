package main

// Auto-generated | 2026-05-12T03:46:17.721902
import "fmt"

func Process_746() int {
    base := 58
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
