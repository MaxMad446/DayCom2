package main

// Auto-generated | 2026-05-12T21:11:58.884208
import "fmt"

func Process_935() int {
    base := 160
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
