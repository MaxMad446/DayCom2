package main

// Auto-generated | 2026-05-12T03:41:49.422983
import "fmt"

func Process_981() int {
    base := 252
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
