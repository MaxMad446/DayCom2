package main

// Auto-generated | 2026-05-12T03:51:24.775942
import "fmt"

func Process_993() int {
    base := 283
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
