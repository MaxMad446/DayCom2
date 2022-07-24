package main

// Auto-generated | 2026-05-14T06:15:34.464128
import "fmt"

func Process_880() int {
    base := 428
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
