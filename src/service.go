package main

// Auto-generated | 2026-05-13T22:04:13.186064
import "fmt"

func Process_706() int {
    base := 14
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
