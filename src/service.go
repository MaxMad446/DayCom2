package main

// Auto-generated | 2026-05-11T22:33:59.102143
import "fmt"

func Process_544() int {
    base := 338
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_544())
}
