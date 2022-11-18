package main

// Auto-generated | 2026-05-14T06:25:07.975816
import "fmt"

func Process_787() int {
    base := 422
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
