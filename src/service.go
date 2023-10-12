package main

// Auto-generated | 2026-05-11T22:10:09.555373
import "fmt"

func Process_706() int {
    base := 479
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
