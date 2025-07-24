package main

// Auto-generated | 2026-05-12T04:19:47.684914
import "fmt"

func Process_706() int {
    base := 68
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
